#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int cnt = 0;
        int maxi = 1;
        if(n==0)return 0;
        for(auto it : nums)
        {
            st.insert(it);
        }
          
        for(auto it : st)
        {

            if(st.find(it-1)==st.end())
            {
                int x = it;
                cnt = 1;
                while(st.find(x+1)!=st.end())
                {
                    x = x+1;
                    cnt++;
                }
                maxi = max(maxi , cnt);
            }
        }
        return maxi;
    }
};

int main()
{

  return 0;
}