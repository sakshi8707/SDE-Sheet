#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		// Your code goes here
		int n = stones.size();
   
    priority_queue<int> maxHeap;

    for (int i = 0; i < n;i++)
    {
      maxHeap.push(stones[i]);
    }
    //after inserting into maxheap

    while(maxHeap.size()!=1)
    {
      int x = maxHeap.top();
      maxHeap.pop();
      int y = maxHeap.top();
      maxHeap.pop();
      int c = x - y;
      maxHeap.push(c);
    }

    return maxHeap.top();
    
  }
};


int main(){
    


return 0;
}