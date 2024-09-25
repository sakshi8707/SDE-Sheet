#include<bits/stdc++.h>
using namespace std;

//   step1 : first finding degree of every node
//   step2 : 



// **vedio solution**
class Solution {
public:
	int minTrioDegree(int n, vector<vector<int>>& edges) {
       

        vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
        vector<int> degree(n + 1, 0);

        //now , coverting edges into adj matrix and finding degree
        for (int i = 0; i < edges.size();i++)
        {
            vector<int> e = edges[i];
            adj[e[0]][e[1]] = 1;
            adj[e[1]][e[0]] = 1;

            degree[e[0]]++;
            degree[e[1]]++;
        }

        int ans = INT_MAX;
        for (int i = 1; i <= n;i++)
        {
            for (int j = i + 1; j <= n;j++)
            {
                for (int k = j + 1; k <= n;k++)
                {
                    if(adj[i][j]==1 && adj[j][k]==1 && adj[k][i]==1)
                    {
                        ans = min(ans, degree[i] + degree[j] + degree[k] - 6);
                    }
                }
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};







// **my trie solution**
class Solution {
public:


    void dfs(int node , int parent,int &cnt,vector<int>& adj[],vector<int>&vis)
    {
        vis[node] = 1;
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                dfs(it, node, cnt, adj, vis);
            }
            else if(vis[it]==1 && parent==node)
            {
                //cycle is detected,now counting no of nodes in cylcy 
                cnt++;
            }
        }
    }

    int minTrioDegree(int n, vector<vector<int>>& edges) {
      int n = edges.size();
      int m = edges[0].size();
//converting edges to adjencancy matrix
      vector<int> adj[n];
        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < n;j++)
            {
                if(edges[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n, 0);
        int cnt = 0;
        dfs(0,-1,cnt ,adj,vis);
        return cnt;
    }
};


int main(){
    


return 0;
}