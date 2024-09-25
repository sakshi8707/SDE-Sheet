#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	string firstNonRepeatingChar(string s) {
    int n = s.size();
    string ans="";
    queue<char> q;
    vector<int> v(26, 0);
    for(auto it : s)
    {
      q.push(it);
      v[it - 'a']++;
      while(!q.empty() and v[q.front()-'a']>1)
        q.pop();
        if(!q.empty())
        ans += q.front();
        else
        ans += "#";
    }
    return ans;
  }
}; 


int main()
{

  return 0;
}