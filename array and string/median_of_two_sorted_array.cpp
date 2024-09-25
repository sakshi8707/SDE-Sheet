#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		// Your code goes here
		int n1 = nums1.size();
		int n2 = nums2.size();
     


    int l = 0, h = n1, median = ((l + h )+ 1) / 2;
    while(l<=h)
    {
      int cut1 = (l + h)>>1;
      int cut2 = median - cut1;
      int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
      int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
      int r1 = (cut1 == n1) ? INT_MAX : nums1[cut1];
      int r2 = (cut1 == n2) ? INT_MAX : nums2[cut2];

      if(l1<=r2 && l2<=r1)
      {
           if((n1+n2)%2!=0)
           {
             return max(l1, l2);
           }
           else
           {
             return (max(l1, l2) + min(r1, r2))/2.0;
           }
      }
      else if(l1>r2)
          {
           h = cut1 - 1;
          }
      else
           {
            l = cut1 + 1;
           }
    }
    return 0.0;
    }
  };

    int main()
    {
      int n1;
      cin >> n1;
      vector<int> nums1;
      for (int i = 0; i < n1; i++)
      {
        int a;
        cin >> a;
        nums1.push_back(a);
      }
      int n2;
      cin >> n2;
      vector<int> nums2;
      for (int i = 0; i < n2; i++)
      {
        int a;
        cin >> a;
        nums2.push_back(a);
      }

      Solution obj;
      double ans = obj.findMedianSortedArrays(nums1, nums2);
      cout << ans << endl;
      return 0;
}
