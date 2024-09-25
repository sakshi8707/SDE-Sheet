#include<bits/stdc++.h>
using namespace std;
// **brute approch**
// **TC : **


class MedianFinder {
public:
  priority_queue<int, vector<int>, greater<int>> minHeap;
  priority_queue<int,vector<int>> maxHeap;

  MedianFinder(){

	}

	void addNum(int num) {
		// Your code goes here
    if(maxHeap.size() || num<=maxHeap.top())
    {
      maxHeap.push(num);
    }
    else
    {
      minHeap.push(num);
    }

    //after all base conditions
    if(maxHeap.size()>minHeap.size()+1)
    {
      minHeap.push(maxHeap.top());
      maxHeap.pop();
    }
    else if(minHeap.size() > maxHeap.size())
    {
      maxHeap.push(minHeap.top());
      minHeap.pop();
    }

	}

	double findMedian() {
		// Your code goes here
    if(maxHeap.size()==minHeap.size())
    {
      return (maxHeap.top() + minHeap.top()) / 2.0;
    }
    else
    {
      maxHeap.top();
    }
	}
}

// **brute approch**
// **TC : **

class MedianFinder {
public:
  vector<int> arr;
  MedianFinder() {

	}

	void addNum(int num) {
		// Your code goes here
    arr.push_back(num);
  }

	double findMedian() {
		// Your code goes here
    double ans;
    int size = arr.size();
    sort(arr.begin(), arr.end());
    if(size%2==0)
    {
      ans = (arr[size / 2] + arr[size / 2 - 1]) / 2.0;
    }
    else
    {
      ans = arr[size / 2];
    }
    return ans;
  }
};

int main(){
    


return 0;
}