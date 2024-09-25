#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {

public:

  int fun(int ans , int n)
  {
    if(n==0)
    {
      return 0;
    }
    if(n==1 || n==2)
    {
      return 1;
    }
    return fun( n - 1) + fun(n - 2) + fun( n - 3);
  }
public:
	int tribonacci(int n) {
		// Your code goes here
    return fun(ans, n-1);
  }
};
int main()
{

  return 0;
}