

// there's tow method to solve
// 1. Max heap
// TC : o(N + klogk)        
// 2. Min heap
// TC : o(N + n-k+1 log (n-k+1))
// 3. Quick Select

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      int n = nums.size();
      priority_queue<int, vector<int>, greater<int>> pq;
      for(auto it : nums)
      {
        pq.push(it);
        if(pq.size()>k)
        {
          pq.pop();
        }
      }
      return pq.top();
    }
};

// TC:O(nlogk)

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
    int k;
    cin >> k;
    Solution obj;
    int ans = obj.findKthLargest(nums,k);
    cout << ans << endl;
    return 0;
}