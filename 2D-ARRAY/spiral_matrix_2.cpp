#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      // Your code goes here
      int k = 1;
      vector<vector<int>> matrix(n, vector<int>(n));
      int right = n - 1, bottom = n - 1, left = 0, top = 0;
      while(left<=right && top<=bottom &&k<=n*n)
      {

        for (int i = left; i <= right;i++)
        {
          matrix[top][i] = k;
          k++;
        }
        top++;
        for (int i = top; i <= bottom;i++)
        {
          matrix[i][right] = k;
          k++;
        }
        right--;
        for (int i = right; i >= left;i--)
        {
          matrix[bottom][i] = k;
          k++;
        }
        bottom--;
        for (int i = bottom; i >= top;i--)
        {
          matrix[i][left] = k;
          k++;
        }
        left ++;
      }
      return matrix;
    }
    
};

int main()
{

    int n;
    cin >> n;
    // vector<vector<int>> matrix(n, vector<int>(n));
    Solution obj;
    vector<vector<int>> ans = obj.generateMatrix(n);

    for(auto row : ans)
    {
      for(auto col : row)
      {
        cout << col << " ";
      }
      cout << endl;
    }

    // for (int i = 0; i < ans.size();i++)
    // {
    //   for (int j = 0; j < ans[0].size();j++)
    //   {
    //     cout << ans[i][j] << " ";
    //   }
    //   cout << endl;
    // }
      return 0;
}