#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		// Your code goes here
    int n = grid.size();
    int m = grid[0].size();

    int perimeter = 0;
    for (int i = 0; i < n;i++)
    {
      for (int j = 0; j < m;j++)
       {
          if(grid[i][j]==1)
          {
            perimeter += 4;
            //now , cheking for below
            if(i>0 && grid[i-1][j]==1)
            {
              perimeter -= 2;
            }
            //now , cheking for right side 
            if(j>0 && grid[i][j-1]==1)
            {
              perimeter -= 2;
            }
          }
       }
    }
    return perimeter;
  }
};

int main(){
    


return 0;
}