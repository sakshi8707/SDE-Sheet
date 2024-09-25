#include<bits/stdc++.h>
using namespace std;

class Solution{
  public :

      vector<int>
          kahnAlgo(int n, vector<int> adj[]){

        vector<int> indegree;
        vector<int> topo;
        queue<int> q;
        stack<int> st;
        // first finding indegree of graph
        for (int i = 0; i < n; i++)
        {
          for (auto it : adj[i])
          {
            indegree[it]++;
          }
        }

        // inserting degree wise node , in graph
        for (int i = 0; i < indegree.size();i++)
        {
           if(indegree[i]==0)
           {
             q.push(indegree[i]);
           }
        }

        //traversing dfs

        while(!q.empty())
        {
          int node = q.front();
          q.pop();
          st.push(node);
          topo.push_back(node);
          for(auto it : adj[node])
          {
            indegree[it]--;
            if(indegree[it]==0)
            {
              q.push(it);
            }
          }
        }
        return topo;
          }
};


int main(){
    


return 0;
}