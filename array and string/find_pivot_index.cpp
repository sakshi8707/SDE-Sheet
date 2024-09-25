#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		// Your code goes here
        int n = nums.size();
        int sumL = 0,sumR=0;
        int l=0,r=n-1;
        while(l<=r)
        {
            if(sumL==sumR && sumR!=0)
            {
                return l;
            }
            else if(sumL<sumR)
            {
                     l++;
                     sumL+=nums[l];
            }
            else if(sumL>sumR)
            {
                r--;
                sumR+=nums[r];
            }
        }
        
	}
};

int main()
{
    int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  Solution obj;
  vector<int> ans = obj.pivotIndex(arr);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}