#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 void help(int i,string& digits,string& temp,vector<string>& ans,unordered_map < char, string>& mp)
 {
   if (i == digits.size())
   {
     ans.push_back(temp);
     return;
   }
   string str1 = mp[digits[i]];
   for (int i = 0; i < str1.size();i++)
   {
     temp.push_back(str1[i]);
     help(i + 1, digits, temp, ans, mp);
     temp.pop_back();
   }
 }
	vector<string> letterCombinations(string digits) {
		// Your code goes here
    unordered_map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";

    vector<string> ans;
    string temp;
   
    help(0, digits, temp, ans, mp);
    return ans;
  }
};


int main()
{
  string digit;cin>>digit;
  Solution obj;
  vector<string> ans = obj.letterCombinations(digit);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}