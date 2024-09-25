#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> arr,int l , int r)
{
     if(r==1)
     {
       return 0;
     }
     if(arr[l] == 0)
     {
       return INT_MAX;
     }
     int min = INT_MAX;
     for (int i = l + 1; i <= r && i <= l + arr[l];i++)
     {
       int jumps = minJumps(arr, l, r);
       if(jumps!=INT_MAX && jumps+1<min)
       {
         min = jumps + 1;
       }
     }
       return min;
}


int main()
{

  vector<int> arr = {1, 2, 3, 4, 3, 2, 1, 3, 5, 2, 6, 2};
  int n = sizeof(arr)/sizeof(arr[0]);
  // cin >> n;
  int x = 6;
  // cin >> x;
  int ans = minJumps(arr, 0, x);
  cout << ans << endl;
  return 0;
}