// Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
         // Your code goes here
         int n = arr.size();
         int cntSubarr = 0;
         for (int i = 0; i <= n - k;i++)
         {
           int sum = 0;
           for (int j = i; j < i + k;j++)
           {
             sum += arr[j];
           }
           if(threshold<=(sum/k))
           {
             cntSubarr++;
           }
         }
         return cntSubarr;
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
   int k;
   cin >> k;
   int threshold;
   cin >> threshold;
   Solution obj;
   int ans = obj.numOfSubarrays(arr, k, threshold);
   cout << ans << endl;
   return 0;
}