#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int mid = n*2 / 2;
        int n1 = nums.size();
        int l = 0,i=0;
        vector<int> ans(n1);
        while(l<n && mid<n1)
        {
            ans[i] = nums[l++];
            i++;
            ans[i] = nums[mid++];
            i++;
    
        }
        return ans;
    }
};


int main()
{

  return 0;
}