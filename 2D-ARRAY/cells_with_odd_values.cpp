#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **Brute force approch
// **TC : o(m*n*k)  where k = indices.size();

class Solution
{
public:
  int oddCells(int m, int n, vector<vector<int>> &indices)
  {
    // Your code here
    vector<vector<int>> ans(m, vector<int>(n, 0));
    for (vector<int> &it : indices)
    {
      int r = it[0];
      int c = it[1];

      // increment the corresponding
      for (int j = 0; j < n; j++)
      {
        ans[r][j]++;
      }
      // increment
      for (int i = 0; i < m; i++)
      {
        ans[i][c]++;
      }
    }
    // now checking odd no and taking up sum
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (ans[i][j] % 2 == 1)
        {
          cnt++;
        }
      }
    }
    return cnt;
  }
  };

// **Better approch
// **TC : o(m+n+k)
// **SC : o(m+n)
#include <vector>

class Solution {
public:
    int oddCells(int m, int n, std::vector<std::vector<int>>& indices) {
        std::vector<int> rowCount(m, 0);
        std::vector<int> colCount(n, 0);

        for (const std::vector<int>& index : indices) {
            int row = index[0];
            int col = index[1];
            rowCount[row]++;
            colCount[col]++;
        }

        int oddCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((rowCount[i] + colCount[j]) % 2 != 0) {
                    oddCount++;
                }
            }
        }

        return oddCount;
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
  int ans = obj.oddCells(row,col,matrix);
  cout << ans << endl;
  return 0;
}