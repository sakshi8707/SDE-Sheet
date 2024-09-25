#include<bits/stdc++.h>
using namespace std;

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int x;

    KthLargest(int k, vector<int>& nums) {
      x = k;
      for (int i = 0; i < nums.size();i++)
      {
        if(minHeap.size()<k)
        {
        minHeap.push(nums[i]);
        }
        else if(nums[i] >minHeap.top())
        {
          minHeap.pop();
          minHeap.push(nums[i]);
        }
      }

    }
    
    int add(int val) {
      if(minHeap.size() < x)
      {
        minHeap.push(val);
      }
      else if(minHeap.top() < val)
      {
        minHeap.pop();
        minHeap.push(val);
      }
      return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */


int main(){
    


return 0;
}