#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **TC : O(nlogn)+O(n)
// **SC : O(1)

class Solution {
public:

    static bool comparator(const vector<int>& a , const vector<int>& b)
    {
      return (a[1]>b[1]);
    }


    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
      int n = intervals.size();

      if(n==0)
      {
        return 0;
      }
      int cnt = 1;
      sort(intervals.begin(), intervals.end(), comparator);

      int endInterval = intervals[0][1];
      for (int i = 1; i < n;i++)
      {
        if(endInterval <= intervals[i][0])
        {
          cnt++;
        }
        else 
        {
          endInterval = intervals[i][1];
        }
      }

      return n - cnt;
    }
};


int main()
{
  
  return 0;
}