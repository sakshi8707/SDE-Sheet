#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        // int j=0;
        string ans = "";

        for(int i=0;i<numRows;i++)
        {  
            string str = "";
            int j=0;
            while(j<numRows)
            {
                str+=s[j];
                j+=(j+numRows-1);
            }
            ans+=str;

        }
        return ans;
    }
};


int main()
{
  string s;
  cin >> s;
  int n;
  cin >> n;
  Solution obj;
  string ans = obj.convert(s, n);
  cout << ans << endl;

  return 0;
}