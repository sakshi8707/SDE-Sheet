#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Input: s = "3[a]2[bc]"
// Output: "aaabcbc"
class Solution 
{
public:
    string decode(string s,int i)
    {
      string ans;
      while(i<s.length() && s[i]!=']' )
      {
        //if digit
        if(isdigit(s[i]))
        {
          int k = 0;
          while(isdigit(s[i]) && i<s.length())
          {
            k = k * 10 + s[i++] - '0';
          }
          i++; //to avoid [
          string r = decode(s, i);
          i++; // to avoid ] char
          while(k--  >0)
          {
            ans += r;
          }
        }
        else
        {
          ans += s[i++];
        }
      }
      return ans;
      }
    


public:
    string decodeString(string s) {
        int i=0;
        return decode(s,i);
    }
};


int main()
{
  string s;
  cin >> s;
  Solution obj.
  return 0;
}