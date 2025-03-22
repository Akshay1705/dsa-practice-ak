#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 1st Approach: Brute Force (O(n^2)) - Active
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        for (int i = 0; i < nums.size(); i++) {
            int zeros = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == 0) zeros++;
                if (zeros <= k) {
                    maxlen = max(maxlen, j - i + 1);
                } else break;
            }
        }
        return maxlen;
    }
    
    /*
    // 2nd Approach: Sliding Window (O(n)) - Commented
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0, l = 0, r = 0, zeros = 0;
        while (r < nums.size()) {
            if (nums[r] == 0) zeros++;
            while (zeros > k) {
                if (nums[l] == 0) zeros--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
    */

    /*
    // 3rd Approach: Optimized Sliding Window (O(n)) - Commented
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0, left = 0, right = 0, zeros = 0;
        while (right < nums.size()) {
            if (nums[right] == 0) zeros++;
            if (zeros > k) {
                if (nums[left] == 0) zeros--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
    */
};

int main() {
    Solution sol;
    vector<int> nums;
    int n, k, temp;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the binary array elements (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    cout << "Enter k (max number of 0s allowed to flip): ";
    cin >> k;

    int result = sol.longestOnes(nums, k);
    cout << "Longest contiguous subarray with at most " << k << " zeroes: " << result << endl;

    return 0;
}
