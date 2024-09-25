#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **Time complexity : o(m*n)

  class Solution {
  public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
      // Your code goes here
      int r = matrix.size();
      int c = matrix[0].size();
      vector<int> row(r,INT_MAX);
      vector<int> col(c,INT_MIN);
      
    
        for (int i = 0; i < r;i++)
        {
          for (int j = 0; j < c;j++)
          {
            row[i] = min(row[i], matrix[i][j]);
            col[j] = max(col[j], matrix[i][j]);
          }
        }
        vector<int> ans;

        for (int i = 0; i < r;i++)
        {
          for (int j = 0; j < c;j++)
          {
            if(row[i]==matrix[i][j] && col[j]==matrix[i][j])
            {
              ans.push_back(matrix[i][j]);
            }
          }
        }
        return ans;
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
  vector<int> ans = obj.luckyNumbers(matrix);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}