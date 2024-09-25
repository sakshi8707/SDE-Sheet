#include<bits/stdc++.h>
using namespace std;

//only bfs solution is exist bcz of level order traversal
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      int n = grid.size();
      int m = grid[0].size();

      vector<vector<int>> vis(n,vector<int>(m,0));
      queue<pair<pair<int, int>, int>> q;

      for (int i = 0; i < n;i++)
      {
        for (int j = 0; j < m;j++)
        {
          if(grid[i][j]==2)
          {
            q.push({{i,j},0});
            vis[i][j] = 2;
          }
        }
      }

      //performing bfs
      int drow[] = {1, 0, -1, 0};
      int dcol[] = {0 , 1 , 0 , -1};
      int time = 0;
      while(!q.empty())
      {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        time = max(time, t);
        q.pop();
        for (int i = 0; i < 4;i++)
        {
          int nrow = r + drow[i];
          int ncol = c + dcol[i];
          //now cheking , for fresh oranges(1's)
          if(nrow>=0 && ncol >=0 && nrow<n && ncol<m && grid[nrow][ncol]==1 && vis[nrow][ncol]!=2)
          {
            q.push({{nrow, ncol}, t + 1});
            vis[nrow][ncol] = 2;
          }
        }
      }

      //cheking for entire grid , is there any fresh oranges is remaingn
      for (int i = 0; i < n;i++)
      {
        for (int j = 0; j < m;j++)
        {
          if(grid[i][j]==1 && vis[i][j]!=2)
          {
            return -1;
          }
        }
      }

      return time;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0)); // Initialize the grid with all zeroes
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j]; // Take input for each cell
        }
    }
    Solution obj;
    int ans = obj.orangesRotting(grid);
    cout << ans << endl;

    return 0;
}
