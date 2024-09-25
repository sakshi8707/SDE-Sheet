#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **better approch**

class Solution {
public:
    string removeDuplicates(string s, int k) {
      int n = s.size();
      stack<pair<int, char>> st;
      st.push({1,'*'});
      string res;
      for (int i = 0; i < n;i++)
      {
        if(st.top().second!=s[i])
        {
          st.push({1, s[i]});
        }
        else
        {
          if(st.top().first+1==k)
          {
            st.pop();
          }
          else
          {
            st.top().first++;
          }
        }
      }
      while(st.size()>1)
      {
      for (int i = 0; i<st.top().first;i++)
      {
          res += st.top().second;
      }
      st.pop();
      }
      reverse(res.begin(), res.end());
      return res;
    }
};


int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    Solution obj;
    string ans = obj.removeDuplicates(s, k);
    cout << ans << endl;

    return 0;
}