#include<iostream>
#include<vector>
#include<algorithm> // For sort
using namespace std;

vector<vector<int>> pairSum(int arr[], int s, int key) {
    vector<vector<int>> ans;
    for(int i = 0; i < s; i++) {
        for(int j = i + 1; j < s; j++) {
            if(arr[i] + arr[j] == key) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int key = 5;
    vector<vector<int>> result = pairSum(arr, 5, key);

    for(const auto& pair : result) {
        cout << "(" << pair[0] << ", " << pair[1] << ") ";//(1, 4) (2, 3) 
    }
    cout << endl;

    return 0;
}
