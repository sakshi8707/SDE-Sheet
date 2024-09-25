#include<bits/stdc++.h>
using namespace std;


// **TC : nlog(k)**

class Solution{
  public:
   
   vector<int>  SortKSortedArray(vector<int> arr,int k)
   {
     int n = arr.size();
     vector<int> ans;
     priority_queue<int , vector<int>,greater<int>> maxHeap;

     for (int i = 0; i < n;i++)
     {
       if(maxHeap.size()>k)
       {
         ans.push_back(maxHeap.top());
         maxHeap.pop();
       }
       maxHeap.push(arr[i]);
     }
    //  reverse(ans.begin(), ans.end());

     while(!maxHeap.empty())
     {
       ans.push_back(maxHeap.top());
       maxHeap.pop();
     }
    
    //  reverse(ans.begin(), ans.end());
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
  vector<int> ans = obj.SortKSortedArray(arr, k);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}