#include<bits/stdc++.h>
using namespace std;

class solution{
  public:
  vector<int> divisor(int n)
  {
    vector<int> ans;
    for (int i = 1; i < sqrt(n);i++)
    {
        if(n%i==0)
        {
          ans.push_back(i);
          if(i!=n/i)
          {
            if(i!=n/i)       //to avoid same number insertion
            {
              ans.push_back(n / i);
            }
          }
        }
    }
    return ans;
  }
};

int main(){
  int n;
  cin >> n;
  solution obj;
  vector<int> ans = obj.divisor(n);
  for(auto it : ans)
  {
    cout << it << " ";
  }
}