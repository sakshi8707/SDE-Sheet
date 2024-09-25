#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solutions {
public:
    vector<string> subsetsString(string nums) {
      int n = nums.size();
      int total = (1 << n);
      vector<string> ans;
      for (int i = 0; i < total-1;i++)
        {
          string str;
          for (int j = 0; j < n-1;j++)
          {
              if((i && (1<<j))!=0)
              {
                str += nums[j];
              }
          }
          ans.push_back(str);
        }
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < (1 << n);i++)
        {
          vector<int> temp;
          for (int j = 0; j < n;j++)
          {
            if(i&(1<<j))
            {
                temp.push_back(nums[j]);
            }
          }
          ans.push_back(temp);
        }
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
  for(auto ti : ans)
  {
    for(auto t : ti)
    {
      cout << t << " ";
    }
    cout << endl;
  }
  return 0;
}