#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maximumProduct(vector<int>& nums, int k) {
		// Your code goes here

    int n = nums.size();
    int ans = 1;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    //now pushing all nums element into minHeap
    for (int i = 0; i < n;i++)
    {
      minHeap.push(nums[i]);
    }
    
    //now 
    while(k>0)
    {
      int a = minHeap.top();
      a++;
      minHeap.pop();
      k--;
      minHeap.push(a);
    }
    //after inserting all elem into heap

    while(!minHeap.empty())
    {
      ans *= minHeap.top();
      minHeap.pop();

    }

    return ans;
  }
};


int main(){
    


return 0;
}