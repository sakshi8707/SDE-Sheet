
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
   vector<int> selectionSort(vector<int> arr)
   {
     vector<int> ans;
     int n = arr.size();
     for (int i = 0; i < n - 1;i++)
     {
       for (int j = i; j < n;j++)
       {
        if(arr[i]>arr[j])
        {
          swap(arr[i], arr[j]);
        }
       }
     }
     return arr;
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
  vector<int> ans = obj.selectionSort(arr);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}