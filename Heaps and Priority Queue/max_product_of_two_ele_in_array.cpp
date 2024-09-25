#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans;
        priority_queue<int> maxHeap;
        int n = nums.size();
        for (int i = 0; i < n;i++)
        {
          maxHeap.push(nums[i]);
        }
        //after inserting finding top 2
          int a = maxHeap.top();
          maxHeap.pop();
          int b = maxHeap.top();
          maxHeap.pop();
          ans = (a - 1) * (b - 1);
          return ans;
    }
    
};

int main(){
    


return 0;
}