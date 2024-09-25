#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      vector<int> ans;

      priority_queue<pair<int, int>> heap;
      int i = 0;
      for(auto it : mat)
      {
        int cnt = count(it.begin(), it.end(), 1);
        heap.push({cnt ,i});
        i++;
        if(heap.size()>k)
        {
          heap.pop();
        }
        
      }
      //after pushing count and idx

      while(!heap.empty())
      {
        ans.push_back(heap.top().second);
        heap.pop();
      }
	  reverse(ans.begin(),ans.end());
      return ans;
    }
};


int main(){
    


return 0;
}