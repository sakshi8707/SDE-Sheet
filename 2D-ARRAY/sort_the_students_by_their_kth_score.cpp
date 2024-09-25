#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **burte force approch  (by lamda func) **
// TC : o(m*logm)
// SC : o(m*n)

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(), score.end(), [&](const vector<int>& a, const vector<int>& b) {
            return a[k] > b[k];
        });
        return score;
    }
};

// **better approch**
// TC : o(m*logm)
// SC : o(n)

class Solution {
public:
	vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
		
	}
};

int main()
{
  
  return 0;
}