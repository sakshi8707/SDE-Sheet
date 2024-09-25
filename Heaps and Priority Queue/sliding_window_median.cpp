#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<double> medianSlidingWindow(vector<int>& nums, int k) {
		// Your code goes here

    int n = nums.size();
      vector<double> ans;
    for (int i = 0; i <= n - k ;i++)
    {
      vector<double> temp(temp.begin() + i, temp.end() + i + k);
      sort(temp.begin(), temp.end());
      double median;
      //if k is even then finding median of two elements 
      if(k%2==0)
      {
        median = (temp[k / 2 - 1] + temp[k / 2]) / 2.0;
      }
      else
      {
        median = temp[k / 2];
      }
      ans.push_back(median);
    }
    return ans;
  }
};


int main(){
    


return 0;
}