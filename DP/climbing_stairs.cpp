#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

//**tabulation technique**
	int climbStairs(int n) {
		// Your code goes here
        vector<int> dp(n+1);
        dp[n-1] = 1;
        dp[n]  = 1;
        for(int i=n-2;i>=0;i--)
        {
            dp[i] = dp[i+1] + dp[i+2];
        }
        return dp[0];
	}
};


//**normal recursion technique with dp


class Solution {
public:
	int climbStairs(int n) {
		// Your code goes here
        int prev = 1, prev2 = 1;
        for(int i=2;i<=n;i++)
        {
            int curr = prev+prev2;
            prev2 = prev;
            prev = curr;
        }
        return prev;
	}
};

int main()
{

  return 0;
}