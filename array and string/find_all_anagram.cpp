#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		// Your code goes here
		int n = s.size();
		int k = p.size();
		sort(p.begin(),p.end());
		vector<int> ans;
		for(int i=0;i<=n-k;i++)
		{
			// appending part
			string temp;
			for(int j=i;j<i+k;j++)
			{
				temp+=s[j];
			}
			sort(temp.begin(),temp.end());
			if(temp==p)
			{
				ans.push_back(i);
			}
 
		}
		return ans;
	}
};


int main()
{
  string s, p;
  cin >> s >> p;
  Solution obj;
  vector<int> ans = obj.findAnagrams(s, p);
  for(auto it : ans)
  {
    cout << it << " ";
  }

  return 0;
}