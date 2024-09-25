private : 

  void dfs(int node , vector<int> adj[],stack<int> &st, vector<int> &vis)
  {
    vis[node] = 1;
    for(auto it : adj[node])
    {
      if(!vis[it])
      {
        dfs(it, adj, st, vis);
      }
    }
    st.push(node);
  }

  private : 

  void findSccDfs(int node , vector<int> adjT[],stack<int> &st, vector<int> &vis)
  {
    vis[node] = 1;
    for(auto it : adjT[node])
    {
      if(!vis[it])
      {
        findSccDfs(it, adjT, st, vis);
      }
    }
  }
