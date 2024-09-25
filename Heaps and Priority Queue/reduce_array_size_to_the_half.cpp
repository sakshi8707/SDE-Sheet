#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
      int n = arr.size();
      vector<int> freq;
      sort(arr.begin(), arr.end());
      int c = 1;
      for (int i = 1; i < arr.size();i++)
      {
        if(arr[i]==arr[i-1])
        {
          c++;
        }
        else
        {
          freq.push_back(c);
          c = 1;
        }
      }

      freq.push_back(c);
      sort(freq.begin(), freq.end());
      int mid = arr.size() / 2;
      int ans = 0;
      for (int i = freq.size() - 1; n>0&&i>=0;i--)
      {
        ans++;
        n -= freq[i];
      }
      return ans;
    }
};


int main(){
    


return 0;
}