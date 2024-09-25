#include<bits/stdc++.h>
using namespace std;

class Solution {
private: 
   bool dfs(int node , vector<int>&vis,vector<int>&visPath,vector<int> adj[],vector<int>& check)
   {
     vis[node] = 1;
     visPath[node] = 1;
     check[node] = 0;
     for(auto it : adj[node])
     {
       if(!vis[it])
       {
        if(dfs(it,vis,visPath,adj,check)==true)
        {
          check[it] = 0;
          return true;
        }
       }
       //if node has been previously visited , but it has to be visited on same path
      else if(visPath[it])
       {
         check[it] = 0;
         return true;
       }
     }
     check[node] = 1;
     visPath[node] = 0;
     return false;
   }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      int n = graph.size();
      int m = graph[0].size();

      vector<int> vis(n, 0);
      vector<int> visPath(n, 0);
      vector<int> check(n, 0);
      vector<int> safeNode;
      vector<int> adj[n];

      for (int i = 0; i < n;i++)
      {
        for (int j = 0; j < m;j++)
        {
          int u = graph[0][1];
          int v = graph[1][0];
          adj[v].push_back(u);
          adj[u].push_back(v);
        }
      }
      //now adjacency list is ready
      for (int i = 0; i < n;i++)
      {
        if(!vis[i])
        {
          dfs(i, vis, visPath, adj,check);
        }
      }
      //if , visPath is 0 is means , safe node
      for (int i = 0; i < visPath.size();i++)
      {
        if(visPath[i]==0)
        {
          safeNode.push_back(visPath[i]);
        }
      }
      return safeNode;
    }
};


int main(){
    


return 0;
}