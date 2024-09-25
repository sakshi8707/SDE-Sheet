#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class DisjointSet{

      vector<int> parent;
      vector<int> size;
  public:
    DisjointSet(int n)
    {
      size.resize(n + 1, 0);
      vector<int> rank(n + 1, 0);
      for (int i = 0; i < n;i++)
      {
        parent[i] = i;
      }
    }

    int findUParent(int node )
    {
        if(node==parent[node])
        {
          return node;
        }
        return parent[node] = findUParent(parent[node]);
    }

    void unionBySize(int u , int v)
    {
      int uPar = findUParent(u);
      int vPar = findUParent(v);

      if(uPar==vPar)
      {
        return;
      }
      if(uPar<vPar)
      {
        parent[uPar] = vPar;
        size[vPar] += size[uPar];
      }
      else                  //(uPar > vPar)
      {
        parent[vPar] = uPar;
        size[uPar] += size[vPar];
      }

    }
};


class Solution {
public:
	int removeStones(vector<vector<int>>& stones) {
		// Your code goes here
    int n = stones.size();
    int maxRow = 0, maxCol = 0;
    for(auto it : stones)
    {
      maxRow = max(maxRow, it[0]);
      maxCol = max(maxCol, it[1]);

    }

    DisjointSet ds(maxRow + maxCol + 1);
    unordered_map<int, int> stonesNode;
    for(auto it : stones)
    {
      int nodeRow = it[0];
      int nodeCol = it[1] + maxRow + 1;
      ds.unionBySize(nodeRow, nodeCol);
      stonesNode[nodeRow] = 1;
      stonesNode[nodeCol] = 1;
    }

    int cnt = 0;
    for(auto it : stonesNode)
    {
      if(ds.findUParent(it.first)==it.first)
      {
        cnt++;
      }
    }

    return n - cnt;
  }
};



int main()
{

  return 0;
}