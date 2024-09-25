#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,  vector<vector<int>>& secondList) {
      int n1 = firstList.size();
      int n2 = secondList.size();
      int ptr1 = 0, ptr2 = 0;
      vector<vector<int>> ans;
      vector<int> temp(2);
      while(ptr1<n1 && ptr2<n2)
      {
        // checking condition 
        if(firstList[ptr1][1]>=secondList[ptr2][0] && firstList[ptr1][0] <=secondList[ptr2][1])
        {
          temp[0] = max(firstList[ptr1][0], secondList[ptr2][0]);
          temp[1] = min(firstList[ptr1][1], secondList[ptr2][1]);
          ans.push_back(temp);
        }
        //now incrementing ptr1 and ptr2
        if(firstList[ptr1][1] > secondList[ptr2][1])
        {
          ptr2++;
        }
        else
        {
          ptr1++;
        }
      }
      return ans;
    }
};


int main()
{

  return 0;
}