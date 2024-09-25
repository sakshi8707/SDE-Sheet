#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int deleteGreatestValue(vector<vector<int>>& grid) {
		// Your code goes here
        int row = grid.size();
        int col = grid[0].size();
        int maxi = INT_MIN;
        for(int i=0;i<row;i++)
        {
        int sum=0;
            for(int j=0;j<col;j++)
            {
                  sum+=grid[i][j];
            }
            maxi = max(sum,maxi);
        }
        return maxi;
	}
};

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> grid(n, vector<int>(m));
  for (int i = 0; i < n;i++)
  {
        for (int j = 0; j < m;j++)
        {
            cin >> grid[i][j];
        }
  }
  Solution obj;
  int ans = obj.deleteGreatestValue(grid);
  cout << ans << endl;

  return 0;
}