#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// ***Backtrking approch***
// class Solution {
// public:
//   void permute(int idx , vector<int>& nums,unordered_set<vector<int>>& st)
//   {
//     if(idx<nums.size())
//     {
//       sort(nums.begin(), nums.end());
//       st.push_back(nums);
//       return;
//     }
//     for (int i = idx; i < nums.size();i++)
//     {
//       swap(nums[idx],nums[i]);
//       permute(idx + 1, nums, st);
//       swap(nums[idx], nums[i]);
//     }
//   }

// 	vector<vector<int>> subsets(vector<int>& nums) {
// 		// Your code goes here
//     unordered_set<vector<int>> st;
//     permutation(0, nums, st);
//     return ans;
//   }
// };

// ***recursion approch***


class Solution {
public:

   void permutation( int idx , vector<<vector<int>> &ans , vector<int>& board , vector<int>& nums)
{
    if(idx==nums.size())
    {
         ans.push_back(board);
         return;
    }
    
                board.push_back(nums[i]);
                permutation(idx+1,ans,board,nums);
                board.pop_back();
                permutation(idx+1,ans,board,nums);
}


	vector<vector<int>> subsets(vector<int>& nums) {

        vector<<vector<int>> ans;
        vector<int> board;
        permutation(0,ans,board,nums);
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
  {
    for(auto it : ans)
    {
      for(auto i : it)
      {
        cout << i << " ";
      }
      cout << endl;
    }
  }

  return 0;
}