#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> ans;
  int finalMask = 0;
  int dp[61][65536];
  int recur(int index, vector<int> &peopleMask, int currentMask)
  {
    if(currentMask  == finalMask)
    {
      return 0;
    }
    if(index==peopleMask.size())
    {
      return 100000000;
    }
    if(dp[index][currentMask] != -1)
    {
      return dp[index][currentMask];
    }
    
    ans.push_back(index);
    int op1 = 1 + recur(index + 1, peopleMask, currentMask | peopleMask[index]);
    ans.pop_back();
    int op2 = recur(index + 1, peopleMask, currentMask);
    int answer = min(op1, op2);
    return answer;
   }


  vector<int> smallestSufficientTeam(vector<string> &req_skills, vector<vector<string>> &people)
  {

    int size = req_skills.size();
     finalMask = (1 << size) - 1;
    map<string, int> skillMap = {};
    for (int i = 0; i < req_skills.size(); i++)
    {
      skillMap[req_skills[i]] = i;
    }

    memset(dp, -1, sizeof(dp));

    vector<int> peopleMask = {};
    for (int i = 0; i < people.size(); i++)
    {
      int currMask = 0;
      for (int j = 0; j < people[i].size(); j++)
      {
        
      }
    }
    }
};


int main()
{

  return 0;
}