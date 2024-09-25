#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **corrected approch**
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        
        for (string& op : operations) {
            if (op == "+") {
                if (st.size() >= 2) {
                    int top1 = st.top();
                    st.pop();
                    int top2 = st.top();
                    st.push(top1);
                    st.push(top1 + top2);
                }
            } else if (op == "D") {
                if (!st.empty()) {
                    st.push(2 * st.top());
                }
            } else if (op == "C") {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(stoi(op));
            }
        }
        
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        
        return sum;
    }
};
//**brute codes**
class Solution {
public:
	int calPoints(vector<string>& operations) {
		// Your code goes here
		
		stack<int> st;
		int n = operations.size();
		for(int i=0;i<n;i++)
		{
			
			if(operations[i]=='+' && i>=2)
			{
			   int sum = st.top();
			   st.pop();
			   int sum2 = st.top();
			   st.push(sum);
				st.push(sum+sum2);
			}
			// if D
			else if(operations[i] == 'D')
			{
				int a = 2* st.top();
				st.push(a);
			}
			//if C
			else if(operations[i] == 'C')
			{
                 st.pop();
			}
			else
			{
				st.push(stoi(operations[i]));
			}

		}
		//now taking some of stack
		int sum = 0;
		while(!st.empty())
		{
			int x = st.top();
			sum+=x;
			st.pop();
		}
		return sum;
	}
};

int main()
{

  return 0;
}