
//why bellman ->dijkstra  algorithm fall under TLE for -ve cycle thats why bellman ford algo is 


#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  vector<int>  bellman_ford(int v , vector<vector<int>>& edges,int s)
  {
    vector<int> dis(v, 1e8);
    dis[s] = 0;

    for (int i = 0; i < v - 1;i++)
    {
        for(auto it : edges)
        {
          int u = it[0];
          int v = it[1];
          int wt = it[2];

          if(dis[u]+wt<dis[v] && dis[u] != 1e8)
          {
            dis[v] = dis[u] + wt;
          }
        }
    }

    //nth relaxation  to check negative cycle
        for(auto it : edges)
        {
          int u = it[0];
          int v = it[1];
          int wt = it[2];

          if(dis[u]+wt<dis[v] && dis[u] != 1e8)
          {
            return {-1};
          }
        }

        return dis;
  }
};


int main(){
    
int V = 6;
	vector<vector<int>> edges(7, vector<int>(3));
	edges[0] = {3, 2, 6};
	edges[1] = {5, 3, 1};
	edges[2] = {0, 1, 5};
	edges[3] = {1, 5, -3};
	edges[4] = {1, 2, -2};
	edges[5] = {3, 4, -2};
	edges[6] = {2, 4, 3};

	int S = 0;
	Solution obj;
	vector<int> dist = obj.bellman_ford(V, edges, S);
	for (auto d : dist) {
		cout << d << " ";
	}
	cout << endl;

return 0;
}