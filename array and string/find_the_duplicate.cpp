#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// **optimal approch : o(n)**

	int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    int ans;
    int slow = nums[0];
    int fast = nums[0];
   
    do{
      slow = nums[slow];
      fast = nums[nums[fast]];
    }while(slow!=fast);
	
    fast = nums[0];
    while(slow!=fast)
    {
      slow = nums[slow];
      fast = nums[fast];
    }
    return slow;
  }
};



// **Better approch : o(logn)**
// 	int findDuplicate(vector<int>& nums) {
//     int n = nums.size();
//     int ans;
//     unordered_map<int, int> mp;
//     for (int i = 0; i < n;i++)
//     {
//       mp[nums[i]]++;
//     }
//     for(auto it : mp)
//     {
//       if(it.second>1)
//       {
//         int ans = it.first;
//         return ans;
//       }
//     }
//     return ans;
//   }
// };


// **brute force approch : o(nlogn)+o(n)**
// 	int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
// 		sort(nums.begin(),nums.end());
// 		int ans ;
// 		for(int i=0;i<n;i++)
// 		{
// 			if(nums[i]==nums[i+1])
// 			{
// 				ans = nums[i];
// 				return nums[i];
// 			}
// 		}
// 		return ans;
        
// 	}
// };


int main()
{

  int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n;i++)
   {
         int a;
         cin >> a;
         arr.push_back(a);
   }
  
   Solution obj;
   int ans = obj.findDuplicate(arr);
   cout << ans << endl;

  return 0;
}