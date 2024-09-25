#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
   int numIdenticalPairs(vector<int>& nums) {
     // Your code goes here
     int cnt=0;
     map<int,int> m;
     int n = nums.size();
     for(int i=0;i<n;i++)
     {
         m[nums[i]]++;
     } 
     //cla
     for(auto it : m)
     {
         int a = it.second;
         cnt = cnt+ (  (a*(a-1))/2  );
     }
     return cnt;
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
  int ans = obj.numIdenticalPairs(arr);

  return 0;
}