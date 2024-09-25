#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **Brute force**
// **Time complexity: O(n^3)**
// **Space complexity: O(n * k)**


class Solution {
public:
	int longestKSubstr(string s, int k) {
		// Your code goes here
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n;i++)
    {
      for (int j = i +1;  j <= n;j++)
      {
        unordered_set<char> distinct(s.begin() + i, s.begin() + j);
        if(distinct.size()==k)
        {
          ans = max(ans, j - i);
        }

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
  int ans = obj.longestKSubstr(s, k);
  return 0;
}