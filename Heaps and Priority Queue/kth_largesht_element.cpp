#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

  int KthLargest(vector<int> arr,int k)
  {
    int n = arr.size();
    priority_queue<int,vector<int,greater<int>> > minHeap;

    for (int i = 0; i < n;i++)
    {
      minHeap.push(arr[i]);
      if(minHeap.size()>k)
      {
        minHeap.pop();
      }
    }

    return minHeap.top();
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
  int ans = obj.KthLargest(arr, k);
  cout << ans << endl;

  return 0;
}