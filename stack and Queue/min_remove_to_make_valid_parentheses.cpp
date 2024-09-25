#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
      int cntbractes = 0;
      int n = s.size();

      string ans = "";
      for (int i = 0; i < n;i++)
      {
        if(tolower(s[i]))
        {
          ans.push_back(s[i]);
        }
        else if(s[i]=='(')
        {
          cntbractes++;
          ans.push_back(s[i]);
        }
        else if(s[i]==')')
        {
          if(cntbractes!=0)
          {
            ans.push_back(s[i]);
          }
        }
      }
      return ans;
    }
};


int main(){
    


return 0;
}