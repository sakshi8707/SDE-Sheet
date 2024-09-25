#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool dfs(vector<vector<int>>& graph,vector<int>&color,int curr)
    {
      for(auto it : graph[curr])
      {
        if(color[it]==color[curr])
        {
          return false;
        }
        else if(color[it]==0)
        {
          color[it] =color[it]-color[curr];
          if(!dfs(graph, color , it))
          {
            return false;
          }
        }
      }
      return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
      int n = graph.size();
      vector<int> color(n, 0);
      for (int i = 0; i < n;i++)
      {
        if(color[i]==0)
        {
          color[i] = -1;
          if(!dfs(graph,color,i))
            return false;
        }
      }
      return true;
    }
};


int main(){
    


return 0;
}