#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
      int n = roads.size();
      priority_queue<pair<int, int>,vector<pair<int,int>> , greater<pair<int,int>> > pq;
      int noWayss = 0;
      vector<pair<int, int>> adj[n];
      vector<int> dis(n, 1e9);
      vector<int> ways(n, 0);

      for(auto it : roads)
      {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
      }

      //after making adj list , now performing dfs

      pq.push({0, 0});
      dis[0] = 0;
      ways[0] = 1;
      int mod = (int)(1e9) + 7;
      while(!pq.empty())
      {
        int wt = pq.top().first;
        int node = pq.top().second;

        pq.pop();
        for(auto it : adj[node])
        {
          int val = it.first;
          int newWt = it.second;
          if(newWt + wt < dis[val])
          {
            dis[val] = newWt + wt;
            pq.push({newWt + wt, val});
            ways[val] = ways[node];
          }
          else if(wt + newWt == dis[val])
          {
            ways[val] = (ways[val] + ways[node]) % mod;
          }
        }
      }
      return ways[n - 1] % mod;
    }
};


int main(){
    


return 0;
}