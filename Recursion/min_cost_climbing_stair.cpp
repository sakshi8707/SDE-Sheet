#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {
		// Your code goes here
        int n = cost.size();
        vector<int> minCost(n+1);
        for(int i=2;i<minCost.size();i++)
            {
               int  firstStep = cost[i-1]+minCost[i-1];
               int  secondStep = cost[i-2]+minCost[i-2];

                minCost[i] = min(firstStep , secondStep);
            }

        return minCost[minCost.size()-1];
	}
};


int main()
{

  return 0;
}