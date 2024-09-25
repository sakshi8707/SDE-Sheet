#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int subsetXORSum(vector<int>& nums) {
		// Your code goes here
		int n = nums.size();
    vector<int> sumAll;
    for (int i = 0; i < (1 << n);i++)
    {
    int sum = 0;    
    for (int j = 0; j < n;j++)
    {
      if(i&(1<<j))
      {
        sum = sum ^ nums[j];
      }
    }
    sumAll.push_back(sum);
    }
    int ans = accumulate(sumAll.begin(), sumAll.end(),0);
    return ans;
  }
};


int main()
{
  int n;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    nums.push_back(a);
  }
  Solution obj;
  int ans = obj.subsetXORSum(nums);
  cout << ans << " ";
  return 0;
}