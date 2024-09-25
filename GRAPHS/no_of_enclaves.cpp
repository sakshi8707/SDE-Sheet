#include<bits/stdc++.h>
using namespace std;
 
 class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
      int n = grid.size();
      int m = grid[0].size();

      vector<vector<int>> vis(n, vector<int>(m,0));
      queue<pair<int, int>> q;

//traversing upper and bottom row of grid , to check for land's
      for (int i = 0; i < n;i++)
      {
        //for upper row 
        if(grid[i][0]==1 && vis[i][0]==0)
        {
          q.push({i, 0});
          vis[i][0] = 1;
        }
        //for bottom row
        if(grid[i][m-1]==1 && vis[i][m-1]==0)
        {
          q.push({i, m - 1});
          vis[i][m - 1] = 1;
        }
      }

      //traversing left and right col of grid, to check for land's
      for (int i = 1; i < m-1;i++)
      {
         if(grid[0][i]==1 && vis[0][i]==0)
        {
          q.push({0,i});
          vis[0][i] = 1;
        }
        //for lower row
        if(grid[n-1][i]==1 && vis[n-1][i]==0)
        {
          q.push({n-1,i});
          vis[n-1][i] = 1;
        }
      }

      //now , performing bfs
      int rowDir[] = {+1, 0, -1, 0};
      int colDir[] = {0,-1,0,+1};

      while(!q.empty())
      {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int i = 0; i < 4;i++)
        {
          int newRow = row + rowDir[i];
          int newCol = col + colDir[i];

          if(newRow >=0 && newCol >=0 && newRow<n && newCol < m && vis[newRow][newCol]==0 && grid[newRow][newCol]==1)
          {
            q.push({newRow, newCol});
            vis[newRow][newCol] = 1;
          }
        }
      }

      //after performing bfs, now checking remaing 1's which is not visited
      int cnt = 0;
      for (int i = 0; i < n;i++)
      {
        for (int j = 0; j < m;j++)
        {
          if(grid[i][j] == 1 && vis[i][j]==0)
          {
            cnt++;
          }
        }
      }
      return cnt;
    }
};

int main(){
    


return 0;
}