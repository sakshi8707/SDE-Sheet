#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute approch : o(min(a,b))**
int gcd(int a,int b)
{
  int ans;
  int n = min(a, b);
  for (int i = 1; i <= n;i++)
  {
      if(a%i==0 && b%i==0)
      {
        ans = i;
      }
  }
  return ans;
}

// **euclidean approch : o(log# min(a,b))**
int gcdbetter(int a,int b)
{
    while(a>0 && b>0)
    {
      if(a>b)
      {
        a = a % b;
      }
      else
      {
        b = b % a;
      }
    }   
    if(a==0)
    {
      return b;
    }
    else
    {
      return a;
    }
}



int main()
{
  int a, b;
  cin >> a >> b;
  int ans = gcdbetter(a, b);
  cout << ans << endl;  
  return 0;
}