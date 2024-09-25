#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute force approch**
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        stack<int> m;
        string str;
        string ans;
        string  temp2;

        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(c >= '0' && c<='9'){
                temp2.push_back(c);
                for(int j=i+1;j<s.size();j++){
                    char ch = s[j];
                    if(ch >= '0' && ch<='9'){
                        temp2.push_back(ch);
                    }
                    else{
                        i=j-1;
                        break;
                    }
                }
                int num = stoi(temp2);
                cout<<num<<endl;
                m.push(num);
                temp2.clear();
            }
            else if(c == ']'){
                int top = m.top();

                while(st.top()!='['){
                    char c = st.top();
                    str.push_back(c);
                    st.pop();
                }
                st.pop();
                reverse(str.begin(),str.end());
                string temp = str;
                for(int i=1;i<top;i++){
                    str = str + temp;
                }

                if(!st.empty()){
                    for(int i=0;i<str.size();i++){
                        st.push(str[i]);
                    }
                }
                else{
                    ans = ans + str;
                }
                str.clear();
                m.pop();
            }
            else{
                st.push(c);
            }
        }

        string rest;
        while(!st.empty()){
            char c = st.top();
            rest.push_back(c);
            st.pop();
        }
        reverse(rest.begin(),rest.end());
        
        ans = ans + rest;

        return ans;
    }
};


// **better approch**
class Solution {
public:

    string decode(string s,int i)
    {
        string ans;
        while(i<s.length() && s[i]!=']')
        {
          if(isdigit(s[i]))
          {
                int k = 0;
                while(isdigit(s[i]) && i<s.length())
                {
                    k = k * 10 + s[i++] - '0';
                    i++;
                }
                string r = decode(s, i);
                while(k--  > 0)
                {
                    ans + = r;
                    i++;
                }
          }
          else
          {
                ans += s[i++];
          }
        }
    }

public:
    string decodeString(string s) {
        int i = 0;
        return decode(s, 0);
    }
};





int main()
{

  return 0;
}