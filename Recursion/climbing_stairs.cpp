#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   int fun(int i , int n)
{
    if(i>n)
    {
        return 0;
    }
    if(i==n)
    {
        return 1;
    }
    return fun(i+1,n)+fun(i+2,n);
}
	int climbStairs(int n) {
		// Your code goes here
       return fun(0,n);
        
	}
};

int main()
{

  return 0;
}