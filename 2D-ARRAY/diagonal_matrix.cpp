#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  vector<vector<int>>  diagonalMatrix(vector<int> arr)
  {
    int n = arr.size();
    vector<vector<int>> ans(n, vector<int>(n,0));
    for (int i = 0; i < n;i++)
    {
      for (int j = 0; j < n;j++)
      {
            if(i==j)
            {
              ans[i][j] = arr[i];
            }
      }
    }
    return ans;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  Solution obj;
  vector<vector<int>> ans = obj.diagonalMatrix(arr);
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