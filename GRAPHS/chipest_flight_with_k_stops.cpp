#include<bits/stdc++.h>
using namespace std;

  class Solution {
  public:
      int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // int n = flights.size();
        int m = flights[0].size();
        vector<pair<int, int>> adj[n];
        for(auto it : flights)
        {
          adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dis(n, 1e9);
        queue<pair<int,pair<int, int>> >q;
        q.push({0,{src ,0}});
        dis[src] = 0;
        while (!q.empty())
        {
          int steps = q.front().first;
          int node = q.front().second.first;
          int wt = q.front().second.second;
          q.pop();
          if(steps>k)
          {
            continue;
          }

          for(auto it : adj[node])
          {
            int val = it.first;
            int newWt = it.second;
            if(newWt + wt < dis[val] &&   steps <= k)
            {
              dis[val] = newWt + wt;
              q.push({steps + 1, {val, newWt + wt}});
            }
          }
        }
        if(dis[dst]==1e9)
        {
          return -1;
        }
        return dis[dst];
          }
  };


int main(){
    // Driver Code.
    int n = 4, src = 0, dst = 3, K = 1;

    vector<vector<int>> flights = {{0, 1, 100}, {1, 2, 100}, {2, 0, 100}, {1, 3, 600},
    {2, 3, 200}};

    Solution obj;

    int ans = obj.findCheapestPrice(n, flights, src, dst, K);

    cout << ans;
    cout << endl;

    return 0;

return 0;
}