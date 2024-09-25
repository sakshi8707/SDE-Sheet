#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
      int n = heights.size();
      int m = heights[0].size();
      priority_queue<pair<int ,pair<int, int>>, vector<pair<int , pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;
      vector<vector<int>> dist(n, vector<int>(m , 1e9));
      dist[0][0] = 0;
      pq.push({0, {0, 0}});

      int rowDir[] = {-1, 0, 1, 0};
      int colDir[] = {0, 1, 0, -1};

      while(!pq.empty())
      {
        auto it = pq.top();
        pq.pop();
        int diff = it.first;
        int row = it.second.first;
        int col = it.second.second;

        if(row == n-1 && col == m-1)
        {
          return diff;
        }

        for (int i = 0; i < 4;i++)
        {
          int newRow = row + rowDir[i];
          int newCol = col + colDir[i];

          if(newRow >=0 && newCol >=0 && newRow <n && newCol < m)
          {
            int newEffort = max(abs(heights[row][col] - heights[newRow][newCol]), diff);
            if(newEffort < dist[newRow][newCol])
              {
                dist[newRow][newCol] = newEffort;
                pq.push({newEffort, {newRow, newCol}});
              }
          }
        }
      }
      return 0;
    }
};


int main(){
    
// Driver Code.

    vector<vector<int>> heights = {{1, 2, 2}, {3, 8, 2}, {5, 3, 5}};

    Solution obj;

    int ans = obj.minimumEffortPath(heights);

    cout << ans;
    cout << endl;

    return 0;

return 0;
}