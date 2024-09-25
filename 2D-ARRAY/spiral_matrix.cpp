#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int right=col-1;
        int bottom = row-1,left=0,top=0;
        vector<int> ans;
        while(top<=bottom && left<=right)
        {
            
            for(int i=top;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
                   if(top<=bottom)
            {
                
            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }

            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};


//**practice 

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int a;
            cin >> a;
            arr[i][j] = a; // Assign the value to the element at (i, j)
        }
    }

    return 0;
}
