#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		// Your code goes here
		stack<int> st;
		char ch;
		for(int i=0;i<s.size();i++)
		{
			ch = s[i];
			if(ch=='{' || ch=='(' || ch=='[')
			{
				st.push(ch);
			}
			else
			{
				if(st.empty())
				{
					return false;
				}
				char x = st.top();
				st.pop();
				if(( ch == ')' && x!= '(' ) || ( ch == '}' && x!='{' ) || ( ch==']' && x!='[' ))
				{
					return false;
				}
			}
			
		}
		return st.empty();
	}
};


int main()
{
  string s;
  cin >> s;
  Solution obj;
  bool ans = obj.isValid(s);
  cout << ans << endl;
  return 0;
}