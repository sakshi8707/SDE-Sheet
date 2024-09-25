#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<vector<int> > subset(vector<int> arr)
{
  int n = arr.size();
  vector<vector<int>> ans;
  int totalSubset = 1 << n;
  for (int i = 0; i < totalSubset;i++)
  {
    vector<int> temp;
    for (int j = 0; j < n;j++)
    {
       if(i&(1<<j))
       {
         temp.push_back(arr[j]);
       }
    }
    ans.push_back(temp);
  }
  return ans;
}


  class Solution {
  public:

      void help(int size,vector<vector<int>> &ans,vector<int>& temp,vector<int>& nums)
      {
        if(size==nums.size())
        {
        ans.push_back(temp);
        return;
        }
        help(size + 1, ans, temp, nums);
        temp.push_back(nums[size]);
          help(size + 1, ans, temp, nums);
      }

      vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> ans;
      vector<int> temp;

      help(0, ans, temp, nums);
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
  vector<vector<int>> ans = obj.subsets(arr);
  cout << ans << " ";
  for(auto ti : ans)
  {
    for(auto it)
  }
  return 0;
}