#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

  int KthSmallest(vector<int> arr,int k)
  {
    int n = arr.size();
    priority_queue<int> maxHeap;

    for (int i = 0; i < n;i++)
    {
      maxHeap.push(arr[i]);
      if(maxHeap.size()>k)
      {
        maxHeap.pop();
      }
    }

    return maxHeap.top();
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
  int ans = obj.KthSmallest(arr, k);
  cout << ans << endl;

  return 0;
}