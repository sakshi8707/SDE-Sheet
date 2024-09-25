#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   
  void dfs(vector<vector<int>>& image,int newColor,int prevColor,int row , int col)
  {
    if(row<0 || col<0 || row>=image.size() || col>=image[0].size() || image[row][col]!=prevColor || image[row][col]==newColor)
    {
      return;
    }
    else
    {

      image[row][col] = newColor;
      dfs(image, newColor, prevColor, row - 1, col);
      dfs(image, newColor, prevColor, row + 1, col);
      dfs(image, newColor, prevColor, row, col+1);
      dfs(image, newColor, prevColor, row, col-1);
      
    }
  }

	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
		// Your code goes here
    int n = image.size();
    int m = image[0].size();

    int newColor = color;
    int prevColor = image[sr][sc];
    dfs(image, newColor, prevColor, sr, sc);
    return image;
  }
};


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> image(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            image[i][j] = a;
        }
    }
    int sr, sc, color;
    cin >> sr >> sc >> color;

    Solution obj;
    vector<vector<int>> filledImage = obj.floodFill(image, sr, sc, color);

    for (auto row : filledImage) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
