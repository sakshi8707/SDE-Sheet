#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      int n = grid.size();
      queue<pair<pair<int, int>, int>> q;
      int dis = 0;
      //base case
      if(grid[0][0] == 1 || grid[n-1][n-1]==1)
      {
        return -1;
      }
      q.push({{0, 0}, 0});
      int rowDir[] = {+1, -1, 0, +1, -1, +1, 0, -1};
      int colDir[] = {0, +1, +1, +1, 0, -1, -1, -1};
      int minStep = 0;
      while(!q.empty())
      {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int dis = q.front().second;
        q.pop();
        //base condition
        if(row==n-1 && col==n-1)
        {
          return dis;
        }
        for (int i = 0; i < 8;i++)
        {
          int newRow = rowDir[i] + row;
          int newCol = colDir[i] + col;
          if (newRow >= 0 && newCol >= 0 && newRow < n && newCol < n && grid[newRow][newCol]==0 && newRow!=n-1 && newCol != n-1)
          {
            q.push({{newRow, newCol}, dis + 1});
            grid[newRow][newCol] = 1;
          }
        }
      }
      return -1;
    }
};


int main(){
    


return 0;
}