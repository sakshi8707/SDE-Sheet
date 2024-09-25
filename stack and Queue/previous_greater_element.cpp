#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> previousGreaterElement(vector<int>& nums) {
		// Your code goes here
		 int n = nums.size();
     stack<int> st;
     vector<int> ans(n,-1);

     for (int i = 0; i < n;i++)
     {
      
      while(!st.empty() && nums[i]>st.top())
      {
        st.pop();
      }
      if(!st.empty() && nums[i]<st.top())
      {
        ans[i] = st.top();
      }
      st.push(nums[i]);
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
  vector<int> ans = obj.previousGreaterElement(arr);
  for(auto it : ans)
  {
        cout << it << " ";
  }

  return 0;
}