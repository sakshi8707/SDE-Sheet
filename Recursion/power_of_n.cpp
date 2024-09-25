#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

   double fastPow(double x , long long n)
   {
    if(n==0)
     {
         return 1.0;
      }
       double half = fastPow(x,n/2);
       if(n%2==0)
       {
           return half*half;
       }
       else
       {
           return half*half*x;
       }
    }
	double myPow(double x, int n) {
		// Your code goes here
        long long N = n;
        if(N<0)
        {
            x = 1/x;
            N = abs(N);
        }
        return fastPow(x,n);
	}
};



int main()
{

  return 0;
}