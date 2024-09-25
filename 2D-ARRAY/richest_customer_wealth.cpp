#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int row = accounts.size();
        int col = accounts[0].size();
        int maxi = INT_MIN;
        for(int i=0;i<row;i++)
        {
        int sum=0;
            for(int j=0;j<col;j++)
            {
                  sum+=accounts[i][j];
            }
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};


int main()
{
   int row, col;
  cin >> row >> col;
  vector<vector<int>> matrix(row, vector<int>(col));
  for (int i = 0; i <row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> matrix[i][j];
    }
  }

  Solution obj;
  int ans = obj.maximumWealth(matrix);
  cout << ans << endl;
  return 0;
}