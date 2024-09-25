#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 class Solution {
public:

    static bool comparator(const vector<int>&a , const vector<int>&b)
    {
      return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      int n = boxTypes.size();
      int m = boxTypes[0].size();
      
      
      int currNoBox = 0;
      int maxUnit = 0;

      for (int i = 0; i < n;i++)
      {
        int noOfBox = it[i][0];
        int noOfUnit = it[i][1];

        if(noOfBox+currNoBox<=truckSize)
        {

          maxUnit += noOfUnit;

        }
      }
    }
};

int main()
{

  return 0;
}