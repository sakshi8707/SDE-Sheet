#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
   int binarySearch(vector<int> arr,int target)
   {
     int n = arr.size();
     int l = 0, r = n - 1;
     while(l<=r)
     {
      int mid = l+( r-l) / 2;
       if(target==arr[mid])
       {
         return mid;
       }


       if(target>arr[mid])
       {
         l = mid+1;
       }
       else
      //  (target<arr[mid])
       {
         r = mid-1;
       }
     }
     return -1;
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
  int target;
  cin >> target;
  Solution obj;
  int ans = obj.binarySearch(arr, target);
  cout << ans << endl;
  return 0;
}