#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> transpose(vector<vector<int>>& matrix) {
		// Your code goes here
		int row = matrix.size();
		int col = matrix[0].size();
    vector<vector<int>> ans(col, vector<int>(row));
    for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				ans[j][i] = matrix[i][j];       //corrected transpose
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

    vector<vector<int>> ans = obj.transpose(matrix);

    for(auto row : ans)
    {
      for(auto col : row)
      {
        cout << col << " ";
      }
      cout << endl;
    }
  
  return 0;
}