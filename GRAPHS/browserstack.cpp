#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 1, 2, 1, 7, 1, 3, 8, 9, 1, 7 }, 7

  int lastJump(vector<int>& arr,int x)
  {
    int n = arr.size();
    int jumps = 0;
    int lastOccurrence = 0;
    
    if(n==0 ||n==1)
    {
      return 0;
    }
    for (int i = n - 1; i >= 0;)
    {

      //curr elem is given element , then updating it
      if(arr[i]==x)
      {
        lastOccurrence = i;
        jumps++;
        i--;  //moving to prev elem
      }
      else if(arr[i] ==0)
      {
        if(lastOccurrence==-1)
        {
          return -1;
        }

        //moving to last occ and reseting las occ
        i = lastOccurrence-1;   
        jumps = 0;
        lastOccurrence = -1;
      }
      else
      {
        jumps++;
        //jumping frwd to acc to curr elem
        i -= arr[i];
      }
    }
     //using ternary operator

    if(lastOccurrence==-1)
    {
      return -1;
    }
    else
    {
      return jumps;
    }

  }



int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0;i<n;i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  int x;
  cin >> x;

  // vector<int> arr = {1, 2, 3, 4, 3, 2, 1, 3, 5, 2, 6, 2};
  // int x = 6;
  vector<int> arr = {1,2,1,7,1,2,8,9,1,7};
  int x = 8;

  cout << lastJump(arr, x) << endl;
  return 0;
}