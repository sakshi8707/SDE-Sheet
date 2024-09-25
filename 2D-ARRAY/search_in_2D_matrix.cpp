#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
    bool searchMatrix(vector<vector<int>> matrix, int target) {
        //Insert your code here
    int row = matrix.size();
    int col = matrix[0].size();

    int r = 0, c = col - 1;
    while(r<row && col>0)
    {
      if(matrix[r][c]==target)
      {
        return true;
      }
      else if(matrix[r][c]>target)
      {
        c--;
      }
      else
      {
        r++;
      }
    }
    return false;
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
  int target;
  cin >> target;
  Solution obj;
  bool ans = obj.searchMatrix(matrix,target);
  cout << ans << endl;
  return 0; 
}