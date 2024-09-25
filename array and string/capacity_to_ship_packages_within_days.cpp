#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **Better Force Approch**
// TC: o(log(min-sum)*o(n)
class Solution {
public:
  int findDays(vector<int> weight,int capacity)
  {
    int days = 1; //first day
    int load = 0;
    for (int i = 0; i < weight.size();i++)
    {
      if(load+weight[i]>capacity)
      {
        days = days + 1;
        load = weight[i];
      }
      else
      {
        load += weight[i];
      }
    }
    return days;
  }

	int shipWithinDays(vector<int>& weights, int days) {
		// Your code goes here
    int n = weights.size();
    int r = accumulate(weights.begin(),weights.end(),0);
    int l = *max_element(weights.begin(), weights.end());
    //applying binary search
    while(l<=r)
    {
      int mid = l + r / 2;
      int noOfDays = findDays(weights, mid);
      if(noOfDays<=days)
      {
        //eliminate right
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
    return l;
    }
}; 


// **Brute Force Approch**
// TC: o(maxi-sum)*o(n)
// class Solution {
// public:
//   int findDays(vector<int> weight,int capacity)
//   {
//     int days = 1; //first day
//     int load = 0;
//     for (int i = 0; i < weight.size();i++)
//     {
//       if(load+weight[i]>capacity)
//       {
//         days = days + 1;
//         load = weight[i];
//       }
//       else
//       {
//         load += weight[i];
//       }
//     }
//     return days;
//   }

// 	int shipWithinDays(vector<int>& weights, int days) {
// 		// Your code goes here
//     int n = weights.size();
//     int sum = 0;
//     int maxi = *max_element(weights.begin(), weights.end());
//     //to finding sum of all weights
//     for(auto it : weights)
//     {
//       sum += it;
//     }
//     //for loop in range max to sum
//     for (int i = maxi; i <= sum;i++)
//     {
//       int dayreq = findDays(weights, i);
//       if(dayreq<=days)
//       {
//         return i; 
//       }
//     }
//     return -1;
//   }
// };


int main()
{
int n;
    cin >> n;
    vector<int> weights;
    for (int i = 0; i < n;i++)
   {
         int a;
         cin >> a;
         weights.push_back(a);
   }
   int days;
   cin >> days;
   Solution obj;
   int ans = obj.shipWithinDays(weights,days);
   cout << ans << endl;

  return 0;
}