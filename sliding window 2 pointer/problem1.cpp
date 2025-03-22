#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        int maxi = 0;  // Use 0 instead of INT_MIN to handle empty cases
        for (int i = 0; i<s.size(); i++) {
            unordered_set<char> st;  // Store characters instead of int
            for (int j = i; j < s.size(); j++) {
                if (st.find(s[j]) != st.end()) {
                    maxi = max(maxi, j - i);
                    break;
                }
                st.insert(s[j]);
            }
            maxi = max(maxi, (int)st.size()); // Ensure the max length is updated
        }
        return maxi;
    }
};

//2nd approch
// class Solution {
//     public:
//         int lengthOfLongestSubstring(string s) {
//             int maxi=0;
//             unordered_set<char>st;
//             int left = 0;
//             for (int right = 0;right<s.size();right++){
//                 if(st.find(s[right]) != st.end()){
//                     while(left<right && st.find(s[right]) != st.end()){
//                         st.erase(s[left]);
//                         left++;
//                     }
//                 }
//                 st.insert(s[right]);
//                 maxi = max(maxi,right-left+1);
//             }
//             return maxi;
//         }
//     };

//3rd approch
// class Solution {
//     public:
//         int lengthOfLongestSubstring(string s) {
//             vector<int>mpp(256,-1);
//             int l=0,r=0;
//             int maxlen=0;
//             while(r<s.size()){
//               if(mpp[s[r]] != -1){
//                 l = max( mpp[s[r]] + 1 , l);
//               }
//               mpp[s[r]]=r;
//               maxlen=max(maxlen,r-l+1);
//               r++;
//             }
//             return maxlen;
//         }
//     };

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int result = sol.lengthOfLongestSubstring(input);
    cout << "Length of Longest Substring Without Repeating Characters: " << result << endl;
    return 0;
}
