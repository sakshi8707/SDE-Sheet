#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute approch**
// **TC : o(m*n)+o(map.lenght())
// **SC : o(


class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int row = rectangles.size();
        int col = rectangles[0].size();
        map<int,int> frqMp;
        for(int i=0;i<row;i++)
        {
            int minNo = INT_MAX;
            for(int j=0;j<col;j++)
            {
                minNo = min(minNo,rectangles[i][j]);
            }
            frqMp[minNo]++;
        }
        //now finding max cnt
        int ans=INT_MIN;
        for(auto it : frqMp)
        {
            ans = max(it.second,ans);
        }
        return ans;
    }
};

int main()
{
 
  return 0;
}