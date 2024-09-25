#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

  bool isValid(int i , int j, vector<vector<int>>&grid)
  {
     if(i>=0 && j>=0 && i<grid.size()&& j<grid[0].size() && grid[i][j]==1)
     {
       return true;
     }
     return false;
  }

  void dfs(vector<vector<int>>& grid,int i,int j,int &area)
  {
    area++;
    grid[i][j] = 0;
      if(isValid(i+1,j,grid))
      {
        dfs(grid, i + 1, j, area);    
      }
      if(isValid(i-1,j,grid))
      {
        dfs(grid, i - 1, j, area);
      } 
      if(isValid(i,j+1,grid))
      {
        dfs(grid, i , j + 1 , area);
      }
      if(isValid(i,j-1,grid))
      {
        dfs(grid, i , j - 1, area);
      }
            
  }

	int maxAreaOfIsland(vector<vector<int>>& grid) {
		// Your code goes here

    int n = grid.size();
    int m = grid[0].size();
    int maxArea = 0;
    for (int i = 0; i < n;i++)
    {
      for (int j = 0; j < m;j++)
      {
        if(grid[i][j]==1)
        {
          int area = 0;
          dfs(grid, i, j, area);
          maxArea = max(maxArea, area);
        }
      }
    }
    return maxArea;
  }
};


int main(){
    


return 0;
}