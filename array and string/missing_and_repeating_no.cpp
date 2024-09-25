#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
   void missingRepeating(vector<int> arr)
   {
     int missing, repeating;
     int n = arr.size();
     map<int, int> mp;
     for (int i = 0;i<n;i++)
     {
       mp[arr[i]]++;
     }
     for(auto it : mp)
     {
      if(it.second==0)
      {
        missing = it.first;
      }
      if(it.second>1)
      {
        repeating = it.first;
      }
     }
     cout << "missing " << missing << endl;
     cout << "repeating " << repeating << endl;
   }
};
int main()
{
int n ;
cin >> n;
vector<int> arr;
for (int i = 0;i<n;i++)
{
     int a;
     cin >> a;
     arr.push_back(a);
}
Solution obj;
obj.missingRepeating(arr);
return 0;
}