#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// **brute apprcoh**
// TC : o(m*n*3*3)

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n-2, vector<int>(m-2));

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                int maxi = INT_MIN;
                for (int r = i; r < i + 3; r++) {
                    for (int c = j; c < j + 3; c++) {
                        maxi = max(maxi, grid[r][c]);
                    }
                }
                ans[i][j] = maxi;
            }
        }

        return ans;
    }
};


int main()
{
  
  return 0;
}