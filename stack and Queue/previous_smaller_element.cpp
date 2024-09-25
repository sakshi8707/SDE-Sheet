#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> previousSmallerElement(vector<int>& arr) {
		// Your code goes here
        int n = arr.size();
		stack<int> st;
		vector<int> ans(n,-1);
		for(int i=0;i<n;i++)
		{
			while(!st.empty() && arr[i]<st.top())
			{
				st.pop();
			}
			if(!st.empty())
			{
				ans[i] = st.top();
			}
			st.push(arr[i]);
		}
		return ans;

	}
};

// **right code**

#include <vector>
#include <stack>

class Solution {
public:
    vector<int> previousSmallerElement(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> answer(n, -1);

        for (int i = n - 1; i >= 0; i--) {
            int currentElement = arr[i];

            // Can currentElement act as NSE for previous elements
            while (!st.empty() && currentElement < arr[st.top()]) {
                // current element > top most element in stack
                // answer of topMostElement = current element
                answer[st.top()] = currentElement;
                st.pop(); // remove this element as it is not required
            }

            st.push(i);
        }

        while (!st.empty()) {
            int topMostIndex = st.top();
            answer[topMostIndex] = -1;
            st.pop();
        }

        return answer;
    }
};



int main()
{

  return 0;
}