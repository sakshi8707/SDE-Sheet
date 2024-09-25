#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for (auto it : nums)
        {
          mp[it]++;
        }
        //after count
    }
};


int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n;i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
        return 0;
}