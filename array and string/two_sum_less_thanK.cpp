#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int twoSumLessThanK(vector<int>& nums, int k) {
		// Your code goes here
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int sum=0,maxSum = -1;
        int l = 0,r = n-1;
        while(l<r)
        {
            sum = nums[l]+nums[r];
            if(sum<k)
            {
                maxSum = max(maxSum,sum);
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxSum;
	}
};

int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n;i++)
  {
        int a;
        cin >> a;
        arr.push_back(a);
  }
  int k;
  cin >> k;

  Solution obj;
  int ans = obj.twoSumLessThanK(arr, k);
  cout << ans << endl;
  return 0;
}