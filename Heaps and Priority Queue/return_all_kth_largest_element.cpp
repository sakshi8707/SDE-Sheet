// **return arr with kth largest**

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

  vector<int> KthLargest(vector<int> arr,int k)
  {
    int n = arr.size();
    vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for (int i = 0; i < n;i++)
    {
      minHeap.push(arr[i]);
      if(minHeap.size()>k)
      {
        minHeap.pop();
      }
    }

    while(!minHeap.empty())
    {
      ans.push_back(minHeap.top());
      minHeap.pop();
    }

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
  int k;
  cin >> k;

  Solution obj;
  vector<int> ans = obj.KthLargest(arr, k);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}   