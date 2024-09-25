#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **Better approch**

class MovingAverage {
public:
  int sizeIs;
  queue<int> q;
  int sum;

  MovingAverage(int size) {
    sizeIs = size;
    sum = 0; // Initialize sum to 0.
  }

  double next(int val) {
    if (q.size() == sizeIs) {
      sum -= q.front(); // Remove the oldest element from sum.
      q.pop();
    }
    
    q.push(val); // Push the new value into the queue.
    sum += val;   // Add the new value to the sum.

    return static_cast<double>(sum) / q.size(); // Calculate and return the average.
  }
};


// **brute approch**

class MovingAverage {
public:
   vector<int> arr;
   int size;
   int sum;
   int cnt;
	MovingAverage(int size) {
        arr.resize(size);
		sum = 0;
		cnt = 0;
	}

	double next(int val) {
		// Your code goes here
        sum+=val;
		cnt++;
		return sum/cnt;
	}
};

int main()
{

  return 0;
}