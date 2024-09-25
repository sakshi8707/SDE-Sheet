  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;

   // **Brute Approch:**
   // TC : O(n^3)+
   // SC : 2*O(n)

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//       int n = nums.size();
//       set<vector<int> > st;
//       for(int i=0;i<n-2;i++)
//       {
//            for(int j=i+1;j<n-1;j++)
//            {
//                for(int k=j+1;k<n;k++)
//                {
//                     if(nums[i]+nums[j]+nums[k]==0 && (i!=j && i!=k && j!=k))
//                     {
//                         vector<int> temp = {nums[i],nums[j],nums[k]};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                     }
//                }
//            }
//       }
//     vector<vector<int>> ans(st.begin(),st.end());
    
//       return ans;
//     }
// };


  // **Better Approch:**
  // TC : O(n^2)+ log(n)
  // SC : O(n) + o(no of unique triplets to store in set)

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//       int n = nums.size();
//       set<vector<int> > st;
      
//       for(int i=0;i<n;i++)
//       {
//         set<int> hashset;
//         for (int j = i + 1; j < n ; j++)
//         {
//           int third = -(nums[i] + nums[j]);
//           if (hashset.find(third)!=hashset.end())
//           {
//             vector<int> temp = {nums[i], nums[j], third};
//             sort(temp.begin(), temp.end());
//             st.insert(temp);
//           }
//           else
//           {
//             hashset.insert(nums[j]);
//           }
//            }
//       }
//     vector<vector<int>> ans(st.begin(),st.end());
    
//       return ans;
//     }
// };


  // **Optimal  Approch:(removing space complexity)**
  // TC : O(n^2)+ log(n)
  // SC : O(n) + o(no of unique triplets to store in set)


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();
      vector<vector<int>> ans;
      sort(nums.begin(), nums.end());
      for (int i = 0; i < n;i++)
      {
        if(i>0 && nums[i]==nums[i-1]) continue;
       
        int j = i + 1, k = n-1;
        while(j<k)
        {
         int sum = nums[i] + nums[j] + nums[k];
          if(sum<0)
          {
            j++;
          }
          else if(sum>0)
          {
            k--;
          }
          else
          {
            vector<int> temp = {nums[i], nums[j], nums[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(nums[j]==nums[j-1])
            {
              j++;
            }
            while(nums[k]==nums[k+1])
            {
              k--;
            }
          }
        }
          
      }
      return ans;
      }
};

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
    vector<vector<int>> ans = obj.threeSum(arr);
    for(auto it : ans)
    {
      for(auto i : it)
      {
           cout <<i<< " ";
      }
      cout << endl;
    }

    return 0;
  }