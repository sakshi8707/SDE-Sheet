#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **brute approch**
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
      int n = bank.size();
      int m = bank[0].size();
      vector<int> cntArr(n);
      //finding no of 1s in every row
      for (int i = 0; i < n;i++)
      {
        int cnt = 0;
        string temp = bank[i];
        for (int j = 0; j < temp.size();i++)
        {
           if(temp[j]=='1')
           {
             cnt++;
           }
        }
        cntArr[i] = cnt;
      }
      //after finding cnt multiplying ans and taking sum
      int prev, sum = 0;
      for (int i = 0; i < cntArr.size();i++)
      {
        if(cntArr[i]>0)
        {
           sum += (cntArr[i] * prev);
           prev = cntArr[i];
        }
      }
      return sum;
    }
};


// **better aproch**
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0,x=0,y=0;
        for(auto &i: bank){
            for(auto &j: i){
                if(j=='1')x++;
            }
            if(x){
                ans += (x*y);
                y = x;
                x = 0;
            }
        }
        return ans;
    }
};

int main()
{

  return 0;
}