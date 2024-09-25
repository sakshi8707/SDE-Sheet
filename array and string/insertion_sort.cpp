
#include<bits/stdc++.h>
using namespace std;

// TC : o(n^2)
// SC : o(1)
class Solution{
  public:
   vector<int> insertionSort(vector<int> arr)
   {
     int n = arr.size();
     for (int i = 1; i < n;i++)
     {
       int key = arr[i];
       int j = i - 1;
       while(j>=0 && key<arr[j])
       {
         arr[j + 1] = arr[j];
         j--;
       }
       arr[j + 1] = key;
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
  vector<int> ans = obj.insertionSort(arr);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}