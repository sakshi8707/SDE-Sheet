#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// **brute approch**
// **TC : O(n2)**
// **SC : o(1)**

class solution{
  public:

  int countPlatforms(int n , int arr[],int dep[])
  {
    int ans = 1, cnt = 1;
    for (int i = 0; i < n;i++)
    {
      int cnt = 1;
      for (int j = i + 1; j < n;i++)
      {
        if((arr[i]<=dep[j] && arr[i]>=arr[j]) || (arr[j]>=arr[i] && arr[j]<=dep[j]))
        {
          cnt++;
        }
      }
      ans = max(ans, cnt);
    }
    return ans;
  }
};

// **better approch**
// **TC : O(nlogn)+O(n)**
// **SC : o(1)**


class Solution{
  public:

  int countPlatforms(int n , int arr[],int dep[])
  {
    sort(arr, arr + n);
    sort(dep, dep + n);

    int ans = 1, cnt = 1, i = 1, j = 0;

    while(i<n && j<n)
    {

      if(arr[i]<=dep[j]) //one more platform needed
      {
        cnt++;
        i++;
      }
      else    //one platform can be reduced
      {
        cnt--;
        j++;
      }
      ans = max(ans, cnt);
    }
    return ans;
  }
};

int main()
{

  return 0;
}