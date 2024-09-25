#include<bits/stdc++.h>
using namespace std;


class Solution{

public :

  vector<int> shortestPath(vector<int> adj[], int src,int n)
  {
    
    vector<int> vis(n, 0);
    vector<int> dis(n, INT_MAX);
    queue<int> q;
    q.push(src);
    dis[src] = 0;

    while(!q.empty())
    {
      int node = q.front();
      q.pop();

      for(auto it : adj[node])
      {
        if(dis[it]>dis[node]+1)
        {
          dis[it] = dis[node] + 1;
          q.push(it);
        }
      }
    }

    return dis;
    }
};

int main(){
  int n,e;cin>>n>>e;
  vector<int> adj[n];
  for(int i = 0; i <n; i++)  
  {
      int u,w;cin>>u>>w;
      adj[u].push_back(w);
      adj[w].push_back(u);
  }
  // int src,dest;cin>>src>>dest;
  Solution obj;
  vector<int> ans = obj.shortestPath(adj,0, n);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}