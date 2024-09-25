#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute force : o(n)**
bool primeNo(int n)
{
  int cnt = 0;
  for (int i = 1; i <= n;i++)
  {
     if(n%i==0)
     {
       cnt++;
     }
  }
  if(cnt==2)
  {
     return true;
  }
  else
  {
    return false;

  }
}

// beeter approch : o(sqrt(n))
bool primeNoBetter(int n)
{
  int cnt = 0;
  for (int i = 1; i*i<=n;i++)
  {
     if(n%i==0)
     {
       cnt++;
       if((n/i)!=i)
       {
         cnt++;
       }
     }
  }
  if(cnt==2)
  {
     return true;
  }
  else
  {
    return false;

  }
}


int main()
{
  int n;
  cin >> n;
bool ans = primeNo(n);
string s = (ans == true) ? "yes" : "no";
cout << s << endl;

  return 0;
}