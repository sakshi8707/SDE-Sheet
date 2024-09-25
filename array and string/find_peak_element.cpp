#include<iostream>
#include<bits/stdc++.h>
using namespace std;


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
   int ans = obj.findPeakElement(arr);
   cout << ans << endl;
  return 0;
}