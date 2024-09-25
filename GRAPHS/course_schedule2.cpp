#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int> adj[numCourses];
      vector<int> indegree(numCourses,0);
      queue<int> q;
      vector<int> topo;

      for(auto it : prerequisites)
      {
        adj[it[1]].push_back(it[0]);
      }

      //finding indegree
      for (int i = 0; i < numCourses;i++)
      {
        for(auto it : adj[i])
        {
          indegree[it]++;
        }
      }
      //inserting '0' indegree node in queue
      for (int i = 0; i < indegree.size();i++)
      {
        if(indegree[i]==0)
        {
          q.push(i);
        }
      }
      //now performing bfs
      while(!q.empty())
      {
        int node = q.front();
        q.pop();
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

      // if topo size is equl to no of node , then  true
      if(topo.size()==numCourses)
      {
        return topo;
      }
      else{
        return {};
      }
        
    }
};


int main(){
    


return 0;
}