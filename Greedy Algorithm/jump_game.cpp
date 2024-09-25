#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& A) {
        int ans=0;
        int N = A.size();
        for(int i=0;i<N;i++)
        {
            if(i>ans)return false;
            
            ans=max(ans, i+A[i]);
        }
        
        return ans>=N-1;
    }
};

int main()
{

  return 0;
}