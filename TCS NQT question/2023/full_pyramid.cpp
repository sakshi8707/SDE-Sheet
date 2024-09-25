#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin >> n;
  int k = 0;
  // main code

  for (int i = 1; i <= n;i++)
  {
    for (int space = 1; space <= n - i;space++)
    {
      cout << " " ;
    }
    for (int j = 1; j <= 2 * i - 1;j++)
    {
      cout << "*";
    }
      cout << endl;
  } 

    return 0;
}