#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    // **TC: O(n^2)**
    // **SC: O(1)**
    vector<int> niceStrings1(vector<string>& A) {
        int n = A.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < i; j++) {
                if (A[j]<A[i]) {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }

    // **TC: O(nlogn)**
    // **SC: O(n)**
    map<string,int> niceStrings2(vector<string>& A) {
        int n = A.size();
        vector<int> ans;
        map<string, int> mp;
        for (int i = 0; i < n;i++)
        {
            mp[A[i]] = i;
        }
        //after inserting elemtn
        sort(mp.begin(), mp.end());
        for (int i = 0; i < n;i++)
        {
          if(i>0 && mp[i].first==mp[i-1].first)
          {
            
          }
        }
            return mp;
    }

    // **TC: O(n)**
    // **SC: O(n)**
    vector<int> niceStrings3(vector<string>& A) {
        int n = A.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < i; j++) {
                if (A[j]<A[i]) {
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};



int main()
{
   int n;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n;i++)
    {
      string a;
      cin >> a;
      arr.push_back(a);
    }

    Solution obj;
    map<string, int> mp = obj.niceStrings2(arr);
    for(auto it : mp)
    {
      cout << it.first << " " << it.second << " " << endl;
    }

    return 0;
}