#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// **wrong code**
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

      unordered_map<int, bitset<10>> reserveMp;
      for(auto it : reservedSeats)
      {
        int row = it[0];
        int col = it[1];
        if(col>=2 && col<=9)
        {
          reserveMp[row][col - 2] = 1;
        }
      }

      int maxFam = 0;
      //now calculating no of family

      for(auto it : reserveMp)
      {
        //
        bitset<10> rowReserved = it.second;
        bool left = true,right = true,middle = true;
        for (int col = 1; col < 10; col++)
        {
             if(rowReserved[col])
             {
              if(col>=1 && col<=4)
                left = false;
              if(col>=3 && col<=6)
                middle = false;
              if(col>=5 && col<=8)
                right = false;
             }
        }
        int Fam = 0;
        if(left && right)
        {
             Fam += 2;
        }
        else if(left || right || middle)
        {
             Fam++;
        }
        // maxFam = max(maxFam, Fam);
        maxFam += Fam;
      }
      maxFam += (n - reserveMp.size()) + 2;
      return maxFam;
    }
};

// doubt :::  If the column is between 2 and 9 (inclusive), it subtracts 2 from col (i.e., col - 2) to map it to the corresponding index in the bitset. This is done because the bitset has a size of 10, and the columns are numbered from 2 to 9, so subtracting 2 ensures that the index aligns with the bitset's index.


int main()
{

  return 0;
}