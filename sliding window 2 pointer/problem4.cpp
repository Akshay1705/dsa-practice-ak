#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Brute Force (O(n^2))
    int totalFruit(vector<int>& fruits) {
        int maxi = 0;
        int k = 2;  // Only 2 types of fruits allowed
        for (int i = 0; i < fruits.size(); i++) {
            set<int> st;
            for (int j = i; j < fruits.size(); j++) {
                st.insert(fruits[j]);
                if (st.size() <= k) {
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                } else break;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> fruits;
    int n, temp;
    
    cout << "Enter the number of fruits: ";
    cin >> n;

    cout << "Enter the fruits array: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        fruits.push_back(temp);
    }

    int result = sol.totalFruit(fruits);
    cout << "Maximum number of fruits that can be collected: " << result << endl;

    return 0;
}
