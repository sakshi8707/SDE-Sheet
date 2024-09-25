#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;
        string ans = ""; // Initialize ans with an empty string

        // Base condition
        if (n < k) {
            return "0";
        }
        if (k == 0) {
            return num;
        }

        // Main traversal
        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 && num[i] < st.top()) {
                --k;
                st.pop();
            }
            st.push(num[i]);
            if (st.size() == 1 && num[i] == '0') {
                st.pop();
            }
        }
        while (!st.empty() && k) {
            --k;
            st.pop();
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        if (ans.size() == 0) {
            return "0";
        } else {
            return ans;
        }
    }
};


int main()
{
  string s;
  cin >> s;
  int k;
  cin >> k;
  Solution obj;
  string ans = obj.removeKdigits(s, k);
  cout << ans << endl;

  return 0;
}