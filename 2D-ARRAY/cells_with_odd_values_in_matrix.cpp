#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        // Your code here
        vector<int> row(m);
        vector<int> col(n);

        for (int i = 0; i < indices.size();i++)
        {
          row[indices[i][0]]++;
          col[indices[i][1]]++;
        }
        int ans = 0;
        for (int i = 0; i < m;i++)
        {
          for (int j = 0; j < n;j++)
          {
            
          }
        }
    }
};


int main()
{

  return 0;
}