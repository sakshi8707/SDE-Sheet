// **return arr with kth largest**

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      int n = arr.size();
      vector<int> ans;
      priority_queue<pair<int, int>> maxHeap;

      for (int i = 0; i < n;i++)
      {

        maxHeap.push({abs(arr[i] - x),arr[i]});
        if(maxHeap.size()> k)
        {
          maxHeap.pop();
        }
      }
      //taking element of maxHeap till 'K'

      while(!maxHeap.empty())
      {
        ans.push_back(maxHeap.top().second);
        maxHeap.pop();
      }
      sort(ans.begin(), ans.end());
      return ans;
    }
};


int main(){

  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n;i++)
  {
    int a;
    cin >> a;
    arr.push_back(a);
  }
  int k,x;
  cin >> x>>k;

  Solution obj;
  vector<int> ans = obj.findClosestElements(arr, x,k);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}   