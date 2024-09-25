#include<bits/stdc++.h>
using namespace std;

  class Solution {
  public:

    int ultimateParent(int node , vector<int>& parent)
    {
      if(node==parent[node])
      {
        return node;
      }
      return parent[node] = ultimateParent(parent[node],parent);
    }

  public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
    {
      int n = edges.size();
      
      vector<int> parent(n);
      
      vector<int> ans;
      for (int i = 0; i < n;i++)
      {
        parent[i] = i;
      }

      //traversing union by ran
      for (auto edge : edges)
      {
        int a = edge[0];
        int b = edge[1];

        int Upar1 = ultimateParent(a,parent);
        int Upar2 = ultimateParent(b,parent);

        if(Upar1 == Upar2)
        {
          //this nodes is need to be redundant
          ans = edge  ;
        }
        else
        {
          parent[Upar1] = Upar2;
        }

        
      }
      return ans;
    }
  };


int main() {
    Solution solution;
    vector<vector<int>> edges = {{1, 2}, {1, 3}, {2, 3}};
    vector<int> redundantConnection = solution.findRedundantDirectedConnection(edges);
    cout << redundantConnection[0] << " " << redundantConnection[1] << " ";
    return 0;
}