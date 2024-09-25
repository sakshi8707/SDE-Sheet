#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute approch**
// ** wrong code**


class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ans = 0;
        stack<char> st;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                ans = max(ans, st.size());
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    // Unmatched closing parenthesis, handle the error here
                    return -1; // You can choose an appropriate error code or value
                }
            }
        }
        
        // Check for unmatched opening parentheses
        if (!st.empty()) {
            return -1; // Unmatched opening parentheses
        }
        
        return ans;
    }
};

// **optiimized code**
class Solution {
public:
	int maxDepth(string s) {
		// Your code goes here
        int n = s.size();
        int ans = 0,curr = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                curr++;
                ans = max(ans,curr);
            }
            else if(s[i]==')')
            {
                curr--;
            }
        }
        return ans;
	}
};

int main()
{
 string s;
    cin >> s;
    int k;
    cin >> k;
    Solution obj;
    int ans = obj.maxDepth(s);
    cout << ans << endl;
  return 0;
}