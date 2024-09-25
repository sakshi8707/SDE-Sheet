#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool help(int i,int j,string &A) {
        if(i>=j) return true;
        if(A[i]!=A[j]) return false;
        return help(i+1,j-1,A);
    }
    bool isPalindrome(string A)
    {
        string s;
        for(auto a:A)
        {
            if(isalnum(a))
            {
                s+=tolower(a);
            }
        }
        return help(0,s.size()-1,s);
    };
};



int main()
{

  return 0;
}