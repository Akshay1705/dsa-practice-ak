#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    int cowCount = 1; 
    int lastPos = stalls[0];
    
    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= mid) {//
            cowCount++; 
            if (cowCount == k) {
                return true;  
            }
            lastPos = stalls[i];  
        }
    }
    return false; 
}

int aggressiveCow(vector<int> &arr, int k, int n) {
    sort(arr.begin(), arr.end());  // Sort the stalls array
    int s = 0;  //Start binary search range
    int e = arr[n-1] - 1;  // End of the binary search range (maximum distance)6-1=5
    int ans = -1;  // Initialize the answer

    while (s <= e) {
        int mid = s + (e - s) / 2;  // Calculate the middle of the current range
        cout << "Checking mid = " << mid << endl;
        if (isPossible(arr, k, mid, n)) {
            ans = mid;  // Update the answer to the current mid
            cout << "Possible with mid = " << mid << ", updating start to " << s + 1 << endl;
            s = mid + 1;  // Try for a larger distance
        } else {
            cout << "Not possible with mid = " << mid << ", updating end to " << e - 1 << endl;
            e = mid - 1;  // Try for a smaller distance
        }
    }
    return ans;  // Return the largest minimum distance found
}

int main() {
    vector<int> arr = {4, 1, 2, 3, 6};  // Input stalls positions
    int n = arr.size();  // Number of stalls
    int k = 2;  // Number of cows

    int final = aggressiveCow(arr, k, n);  // Get the result
    cout << "The largest minimum distance is: " << final << endl;

    return 0;
}
