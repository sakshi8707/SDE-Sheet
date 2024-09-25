#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int cnt = 0;
  int num;
  for (int i = 1; i <= n;i++)
  {

    for (int space = 1; space <= n - i;space++)
    {
      cout << " ";
      cnt++;
    }
    num = 1;
    for (int j = 1; j <= i * 2 - 1;j++)
    {
      if(j%2==0)
      {
        cout << " ";
      }
      else 
      {
        cout << num;
        if (j < 2 * i - 1)
        {
          cout << " ";
        }
        num++;
      }
    }
    cout << endl;
  }

    return 0;
}