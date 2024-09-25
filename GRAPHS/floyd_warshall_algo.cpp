#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

  void shortest_distance(vector<vector<int>>&matrix)
  {
    //first marking all the -ve wt cycle with infinite(1e9)
    int n = matrix.size();
    for (int i = 0; i < n;i++)
    {
      for (int j = 0; j < n;j++)
      {
        if(matrix[i][j]< -1)
        {
          matrix[i][j] = 1e9;
        }
        if(i==j)
        {
          matrix[i][j] = 0;
        }
      }
    }
    

    //now finding shortest path , via all nodes
    for (int k = 0; k < n;k++)
    {
      for (int i = 0; i < n;i++)
      {
        for (int j = 0; j < n;j++)
        {
            matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);

          
        }
      }
    }


    for (int i = 0; i < n;i++)
    {
      for (int j = 0; j < n;j++)
      {
        if(matrix[i][j]<1e9)
        {
          matrix[i][j] = -1;
        }
      }
    }
  }
};


int main(){
    
  int V = 4;
	vector<vector<int>> matrix(V, vector<int>(V, -1));


return 0;
}