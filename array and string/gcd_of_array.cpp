#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int gcd(int a,int b)
{
   if(b==0)
   {
     return a;
   }
   return gcd(b,a%b);
}

	int findGCD(vector<int>& nums) {
		// Your code goes here
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
              mini = min(mini,nums[i]);
               maxi = max(maxi,nums[i]);
        }
        int ans =  gcd(maxi,mini);
        return ans;
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
  Solution obj;
  int ans = obj.findGCD(arr);
  cout << ans;
  return 0;
}