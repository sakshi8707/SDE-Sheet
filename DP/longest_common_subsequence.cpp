#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **TC: (len1* len2 )**
class Solution {
public:
    int helper(int i, int j, string& text1, string& text2, vector<vector<int>>& dp) {
        if (i >= text1.size() || j >= text2.size()) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        
        int ans = 0;
        if (text1[i] == text2[j]) {
            ans = 1 + helper(i + 1, j + 1, text1, text2, dp);
        } else {
            int op1 = helper(i + 1, j, text1, text2, dp);
            int op2 = helper(i, j + 1, text1, text2, dp);
            ans = max(op1, op2);
        }
        dp[i][j] = ans;
        return ans;
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.size(), l2 = text2.size();
        vector<vector<int>> dp(l1, vector<int>(l2, -1));
        return helper(0, 0, text1, text2, dp);
    }
};

int main()
{

  return 0;
}