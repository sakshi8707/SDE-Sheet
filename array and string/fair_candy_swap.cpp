#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
		// Your code goes here
    int s1 = 0, s2 = 0;
    int n = aliceSizes.size();
    for (int i = 0; i < n;i++)
    {
      s1 += aliceSizes[i];
      s2 += bobSizes[i];
    }
    sort(aliceSizes.begin(), aliceSizes.end());
    for (int i = 0; i < n;i++)
    {
      int x = bobSizes[i];
      int y = (s1 - s2 + 2 * x) / 2;
    }
  }
};


int main()
{

  return 0;
}