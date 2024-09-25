#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute force approch**
class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& temperatures) {
		// Your code goes here
		int n = temperatures.size();
		vector<int> ans(n);
		bool yes = false;
		for(int i=0;i<n;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				if(temperatures[i]<temperatures[j])
				{
					ans[i] = j-i;
					yes = true;
					break;
				}
			}
			if(!yes)
			{
				ans[i] = 0;
			}
			yes = false;
		}
		return ans;
	}
};
// **better approch**

class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& temperatures) {
		// Your code goes here
    int n = temperatures.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0;i--)
    {

      while(!st.empty() && temperatures[i] >= temperatures[st.top()])
      {
        st.pop();
      }

      //at last stack is not empty
      if(!st.empty())
      {
        ans[i] = st.top() - i;
      }

      //inserting in stack if 
      st.push(i);
    }
    return ans;
  }
};


int main()
{

  return 0;
}