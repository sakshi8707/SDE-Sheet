  #include<iostream>
  #include<bits/stdc++.h>
  using namespace std;

   // **Brute Approch:**
   // **TC : O(n^4)
   // **SC : O(no of goods) * 2
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {

//         int n = nums.size();
//         long long sum=0;
//         set<vector<int>> st;
//         for (int i = 0; i < n ;i++)
//         {
//           for (int j = i + 1; j < n ;j++)
//           {
//             for (int k = j + 1; k < n ;k++)
//             {
//               for (int l = k + 1; l < n ;l++)
//               {
//                 sum = nums[i];
//                 sum+=nums[j];
//                 sum+=nums[k];
//                 sum+=nums[l];
//                 if(sum==target)
//                 {
//                   vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
//                   sort(temp.begin(), temp.end());
//                   st.insert(temp);
//                 }
//               }
//             }
//           }
//         }
//         vector<vector<int>> ans = {st.begin(), st.end()};
//         return ans;
//     }
// };


   // **Better Approch:**
   // **TC : O(n^2)+O(long m-which is no of element in hashset)
   // **SC :o(quads)*2  

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n = nums.size();
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n ;i++)
        {
          if(i>0 && nums[i]==nums[i-1])   continue;
          for (int j = i + 1; j < n ;j++)
          {
          if(j>i+1 && nums[j]==nums[j-1])   continue;

          int k = j + 1, l = n - 1;
          while(k<l)
          {  
          long long   sum = nums[i];
          sum += nums[j];
          sum += nums[k];
          sum += nums[l];
          if(sum==target)
          {
            vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
            ans.push_back(temp);
            k++;
            l--;
            while(k<l && nums[k]==nums[k-1])
             { k++;}
            while(k<l && nums[l]==nums[l+1])
              {l--;}  
          }
          else if(sum>target)
          {
            l--;
          }
          else 
          {
            k++;
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
    int target;
    cin >> target;
    Solution obj;
    vector<vector<int>> ans = obj.fourSum(arr,target);
    for(auto it : ans)
    {
      for(auto i : it)
      {
           cout << i<<" ";
      }
      cout << endl;
    }

    return 0;
  }