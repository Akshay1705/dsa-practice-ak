#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0;
        int n = cardPoints.size();
        int maxsum = 0;

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }
        maxsum = lsum;

        // Sliding window approach: remove elements from left and add from right
        int rightId = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[rightId];
            rightId--;
            maxsum = max(maxsum, lsum + rsum);
        }

        return maxsum;
    }
};

int main() {
    Solution sol;
    vector<int> cardPoints;
    int n, k, temp;
    
    cout << "Enter the number of card points: ";
    cin >> n;

    cout << "Enter the card points: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cardPoints.push_back(temp);
    }

    cout << "Enter k (number of cards to pick): ";
    cin >> k;

    int result = sol.maxScore(cardPoints, k);
    cout << "Maximum score by picking " << k << " cards: " << result << endl;

    return 0;
}
