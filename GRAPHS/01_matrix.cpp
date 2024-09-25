#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

      int n = mat.size();
      int m = mat[0].size();

      vector<vector<int>> vis(n, vector<int>(m, 0));
      vector<vector<int>> distance(n, vector<int>(m, 0));
      queue<pair<pair<int, int>, int>> q;

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (mat[i][j] == 0) {
            vis[i][j] = 1;
            q.push({{i, j}, 0});
          } else {
            vis[i][j] = 0;
          }
        }
      }

      int rowDir[] = {-1, 0, +1, 0};
      int colDir[] = {0, +1, 0, -1};
      while (!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;  // Fix: Accessing the second value for column index
        int dis = q.front().second;

        q.pop();
        distance[row][col] = dis;

        for (int i = 0; i < 4; i++) {
          int nrow = row + rowDir[i];
          int ncol = col + colDir[i];

          if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && vis[nrow][ncol] ==0 && mat[nrow][ncol]==1) {
            vis[nrow][ncol] = 1;
            q.push({{nrow, ncol}, dis + 1});
          }
        }
      }
      return distance;
    }
};

int main() {
    // Add test cases or other code as needed
    return 0;
}
