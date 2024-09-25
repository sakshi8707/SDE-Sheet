#include<bits/stdc++.h>
using namespace std;

// **brute approch**
// **TC : o(n)**
// **SC : o(n) for map**



// **better approch**
// **TC : O(n * log(n))**
// **SC : o(n) for maxHeap**

class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& score) {
		// Your code goes here

    int n = score.size();
    vector<string> ans(n);
    priority_queue<pair<int, int>> maxHeap;

    for (int i = 0; i < n;i++)
    {
      maxHeap.push({score[i], i});
    }

    //taking element from maxHeap
    int i = 0;
    while (!maxHeap.empty() && i < n)
    {
      int freq = maxHeap.top().second;
      int no = maxHeap.top().first;
      i++;
      

      if (i == 1)
{
    ans[freq] = "Gold Medal";
}
else if (i == 2)
{
    ans[freq] = "Silver Medal";
}
else if (i == 3)
{
    ans[freq] = "Bronze Medal";
}
else
{
    ans[freq] = to_string(i);
}

      //  cnt++;
       maxHeap.pop();
     }
    //  reverse(ans.begin(), ans.end());
     return ans;
    }
};


int main()
{
  int n;
  cin >> n;
  vector<int> score;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    score.push_back(a);
  }

  Solution obj;
  vector<string> ans = obj.findRelativeRanks(score);
  for (auto it : ans)
  {
    cout << it << " ";
  
  }
    return 0;
}