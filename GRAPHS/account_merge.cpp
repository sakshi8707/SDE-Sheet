#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
  vector<vector<string>> parent;
  vector<int> rank;
  public:
  DisjointSet(vector<vector<string>>& accounts)
  {
    parent = accounts;
    rank.resize(accounts.size(), 0);
  }


  string ultimateParent(string u , int i , int j)
  {
    if(u==parent[i][j])
    {
      return u;
    }
    return parent[i][j] = ultimateParent(parent[i][j],i,j);
  }


  void unionByRank(string u , int ui ,int uj , string v , int vi , int vj)
  {
      string  parU = ultimateParent(u, ui, uj);
      string  parV = ultimateParent(v, vi, vj);

      if(parU != parV)
      {
        if(rank[ui] < rank[vi])
        {
            parent[ui][0] = parV;
        }
        else if(rank[ui] > rank[vi])
        {
            parent[vi][0] = parU;
        }
        else
        {
            parent[vi][0] = parU;
            rank[ui]++;
        }
      }
  }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
      int n = accounts.size();
      int m = accounts[0].size();
      DisjointSet ds(accounts);
      for (int i = 0; i < n; i++) {
        for (int j = 1; j < accounts[i].size(); j++) {
          ds.unionByRank(accounts[i][0], i, 0, accounts[i][j], i, j);
        }
      }

      unordered_map<string, set<string>> mergedAccounts;
      for (int i = 0; i < n; i++) {
        for (int j = 1; j < accounts[i].size(); j++) {
          string parent = ds.ultimateParent(accounts[i][0], i, 0);
          mergedAccounts[parent].insert(accounts[i][j]);
        }
      }

      vector<vector<string>> result;
      for (auto& entry : mergedAccounts) {
        vector<string> account;
        account.push_back(entry.first);
        for (const auto& email : entry.second) {
          account.push_back(email);
        }
        result.push_back(account);
      }

      return result;
    }
};

int main()
{
  vector<vector<string>> accounts = {{"John","johnsmith@mail.com","john_newyork@mail.com"},{"John","johnsmith@mail.com","john00@mail.com"},{"Mary","mary@mail.com"},{"John","johnnybravo@mail.com"}};
  Solution sol;
  vector<vector<string>> mergedAccounts = sol.accountsMerge(accounts);
  for (const auto& acc : mergedAccounts) {
    for (const auto& elem : acc) {
      cout << elem << " ";
    }
    cout << endl;
  }
  return 0;
}
