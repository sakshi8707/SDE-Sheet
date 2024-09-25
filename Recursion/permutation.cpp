#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 // **better approch : Backtracking**
//  input :
//  3
//  1 2 3
//  output: 
//  1 2 3 
// 1 3 2 
// 2 1 3 
// 2 3 1 
// 3 1 2 
// 3 2 1


void permutation(int idx , vector<vector<int>>& ans ,vector<int>& nums)
{
  if(idx == nums.size())
  {
    ans.push_back(nums);
    return;
  }
  for (int i = idx; i < nums.size();i++)
  {
    swap(nums[idx], nums[i]);
    permutation(idx + 1, ans, nums);
    swap(nums[idx], nums[i]);
  }
}

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>> ans;
        permutation(0,ans,nums);
        return ans;
	}
};




 // **brute approch : recursion**
// class Solution {
// public:

//    void permutation( vector<vector<int>> &ans , vector<int>& board , vector<int>& vis,vector<int>& nums)
// {
//     if(board.size()==nums.size())
//     {
//          ans.push_back(board);
//          return;
//     }
//     for(int i=0;i<nums.size();i++)
//         {
//             if(!vis[i])
//             {
//                 board.push_back(nums[i]);
//                 vis[i] = 1;
//                 permutation(ans,board,vis,nums);
//                 vis[i] = 0;
//                 board.pop_back();
//             }
//         }
// }

// 	vector<vector<int>> permute(vector<int>& nums) {

//         vector<vector<int>> ans;
//         vector<int> board;
//         vector<int> vis(nums.size(),0);
//         permutation(ans,board,vis,nums);
//         return ans;
//   }
// };


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
  vector<vector<int>> ans = obj.permute(arr);
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