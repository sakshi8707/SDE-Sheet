
#include<bits/stdc++.h>
using namespace std;

// TC : o(n^2)
// SC : o(1)
class Solution{
  public:
   vector<int> bubbleSort(vector<int> arr)
   {
     int n = arr.size();
     for (int i = n - 1; i >= 0;i--)
     {  
       for (int j = 0; j < i;j++)
       {
        if(arr[j]>arr[j+1])
        {
          swap(arr[j], arr[j + 1]);
        }
       }
     }
     return arr; 
   }

   
   vector<int> selectionSort(vector<int> arr)
   {
     int n = arr.size();
     int mini = INT_MAX;
     for (int i = 0; i < n;i++)
     {
       for (int j = i; j < n;j++)
       {
        if(arr[i]>arr[j])
        {
          swap(arr[i], arr[j]);
        }
       }
     }
     return arr; 
   }
   vector<int> insertionSort(vector<int> arr)
   {
     int n = arr.size();
     int mini = INT_MAX;
     for (int i = 1; i < n;i++)
     {
       int j = i - 1;
       int key = arr[i];
       while(j>=0 && arr[j]>key)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
     }
       return arr; 
   }
   vector<int> MergeSort(vector<int> arr)
   {
     int n = arr.size();
     int mini = INT_MAX;
     for (int i = 1; i < n;i++)
     {
       int j = i - 1;
       int key = arr[i];
       while(j>=0 && arr[j]>key)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
     }
       return arr; 
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
  // vector<int> ans = obj.bubbleSort(arr);
  // vector<int> ans = obj.selectionSort(arr);
  vector<int> ans = obj.insertionSort(arr);
  for(auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}