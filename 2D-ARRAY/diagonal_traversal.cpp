#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topLeftToBottomRight(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int> ans;
        
        for (int diagonal = 0; diagonal < row + col - 1;diagonal++)
        {
           //this is for upper half diagonal
          if(diagonal<row)    
        {  for (int i = diagonal,   j = 0; i >= 0 && j <= diagonal;i--,j++)
          {
            ans.push_back(mat[i][j]);
          }
          }
           //this is for lower half diagonal
          else
          {
          for (int i = row - 1, j = diagonal - row + 1; i >= 0 && j < col;i--,j++)
          {
            ans.push_back(mat[i][j]);
          }
          }
        }
        return ans;
        }
};
class Solution {
public:
    vector<int> topLeftToBottomRight(vector<vector<int>>& mat) {
        int rows = matrix.size();
    int cols = matrix[0].size();

    // Traverse each diagonal
    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
        if (diagonal < rows) {
            // Start from the first column and move diagonally
            for (int i = diagonal, j = 0; i >= 0 && j < cols; i--, j++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Start from the last row and move diagonally
            for (int i = rows - 1, j = diagonal - rows + 1; i >= diagonal - cols + 1 && j < cols; i--, j++) {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
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
  vector<int> ans = obj.topLeftToBottomRight(matrix);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}