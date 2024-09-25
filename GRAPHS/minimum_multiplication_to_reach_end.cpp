#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumMultiplications(vector<int> &arr, int start, int end)
    {
      int n = arr.size();
      vector<int> dis(1000, 1e9);
      int mod = 100000;
      dis[start] = 0;
      queue<pair<int, int>> q;
      q.push({start, 0});


      while(!q.empty())
      {
        int node = q.front().first;
        int step = q.front().second;

        for(auto it : arr)
        {
          int num = (it * node) % mod;
          if(dis[num]>step+1)
          {
            dis[num] = step + 1;
            if(num==end)
            {
              return step + 1;
            }
            q.push({num, step + 1});
          }
        }

      }
      return -1;
    }
};


int main(){
int n,e;cin>>n>>e;
  vector<int> adj;
  for(int i = 0; i <n; i++)  
  {
    int a;
    cin >> a;
    adj.push_back(a);
  }
  int src,dest;cin>>src>>dest;
  Solution obj;
  int ans = obj.minimumMultiplications(adj,src,dest);
  cout << ans << endl;


return 0;
}