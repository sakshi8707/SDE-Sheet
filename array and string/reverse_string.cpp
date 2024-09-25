/** input :  y o u a r e f o o l 
 output : l o o f e r a u o y
 **/

#include<bits/stdc++.h>
using namespace std;
// //  time complexity : o(n^2)
// // sapce complexity :   o(n)
// class Solution{
//   public:
//     string reverseString(string s)
//     {
//       int  n = s.size();
//       string ans=" ";
//       for (int i = n-1; i >= 0;i--)
//       {
//         ans += s[i];
//       }
//       return ans;
//     }
//     };


//  time complexity : o(n^2)
// sapce complexity :   o(n)
// Since n/2 and n have the same growth rate in terms of time complexity analysis, we can simplify the time complexity to O(n). This is because, in big O notation, we are interested in the overall behavior of the algorithm as the input size approaches infinity. Thus, we ignore the constant factor (1/2 in this case) and focus on the general trend of the algorithm's performance.
// Therefore, both O(n/2) and O(n) represent the same time complexity class, indicating linear time complexity.

class Solution{
  public:
    string reverseStringBetter(string s)
    {
      int  n = s.size();
      for (int i = 0; i < (n / 2);i++)
      {
        swap(s[i], s[n - 1 - i]);
      }
      return s;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    string ans = obj.reverseStringBetter(s);
    cout << ans << endl;

    return 0;
}