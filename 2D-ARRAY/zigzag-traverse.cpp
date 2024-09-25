#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        vector<int> ans;
        bool up = true;
        int r=0, c =0;
        while(r<row && c<col)
        {
          if(up)
          {
              //for upper traversal
              while(r>0 && c<col-1)
              {
                ans.push_back(mat[r][c]);
                r--;
                c++;
              }
            ans.push_back(mat[r][c]);
              if(c==col-1)
              {
                r++;
              }
              else
              {
                c++;
              }
          }
          else
          {
            //for bottom
            while(c>0 && r<row-1)
            {
                ans.push_back(mat[r][c]);
                c--;
                r++;
            }
            ans.push_back(mat[r][c]);
            if(r==row-1)
            {
                c++;
            }
            else
            {
                r++;  
            }
          }
            up = !up;
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
  vector<int> ans = obj.findDiagonalOrder(matrix);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}