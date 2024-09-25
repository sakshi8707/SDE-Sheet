#include<bits/stdc++.h>
using namespace std;

class Solution {
private : 
    pair<int,int> findCordinates(int curr,int n)
    {
      int row = n - (curr - 1) / n - 1;
      int col = (curr - 1) % n;
      if(row%2==n%2)
      {
        return {row, n - 1 - col};
      }
      else
      {
        return {row, col};
      }
    }
public:
    int snakesAndLadders(vector<vector<int>>& board) {

      int n = board.size();
      queue<int> q;
      int steps = 0;
      vector<vector<int>> visited(n,vector<int>(n,0));
      q.push(1);
      visited[n - 1][0] = 1;

      while (!q.empty())
      {
        int qSize = q.size();
        for (int i = 0; i < qSize; i++)
        {
          int node = q.front();
          q.pop();
          if(node==n*n)
          {
            return steps;
          }
          for (int j = 1; j <= 6; j++) // for 6 sides of the die
{
    int nextNode = j + node;
    if (nextNode <= n * n)
    {
        pair<int, int> position = findCordinates(nextNode, n);
        int row = position.first;
        int col = position.second;
        if (row >= 0 && row < n && col >= 0 && col < n && visited[row][col] == 0)
        {
            visited[row][col] = 1;
            if (board[row][col] == -1)
            {
                q.push(nextNode);
            }
            else
            {
                q.push(board[row][col]);
            }
        }
    }
}

          }
          steps++;
        }
        return -1;
    }
};


int main(){
    


return 0;
}