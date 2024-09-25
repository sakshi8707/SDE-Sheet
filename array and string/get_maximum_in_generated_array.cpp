#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    // TC : O(N) + O(1) + O(N) = O(N).
    // SC :  O(N)
  class Solution {
  public:
      vector<int> sortArrayByParity(vector<int>& nums) {
        
          unordered_map<int, vector<int>> map1; // Create an unordered_map to store the numbers based on their parity

          // Iterate through the input vector nums
          for(auto x : nums){
              map1[x % 2].push_back(x); // Group the numbers based on their parity using modulo operator and store them in the map
          }

          // Check if there are no odd numbers in the input vector
          if(map1.find(1) == map1.end())
              return map1[0]; 
          if(map1.find(0) == map1.end())
              return map1[1]; 
          map1[0].insert(map1[0].end(), map1[1].begin(), map1[1].end());

          return map1[0]; 
      }
  };
int main()
{
int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    Solution obj;
    int ans = obj.sortArrayByParity(nums);
    cout << ans << endl;
  return 0;
}