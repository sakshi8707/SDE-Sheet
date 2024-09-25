#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxEle = INT_MIN;
        int secEle = INT_MIN;  // Initialize secEle to INT_MIN
        for (int i = 0; i < n; i++) {
            if (nums[i] >= maxEle) {
                secEle = maxEle;
                maxEle = nums[i];
            } else if (nums[i] > secEle) {
                secEle = nums[i];
            }
        }
        return ((secEle - 1) * (maxEle - 1));
    }
};



class Solution {
public:
	int maxProduct(vector<string>& words) {
		// Your code goes here
        int prod = 1, maxi = INT_MIN;
        int n = words.size();
        for (int i = 0; i < n;i++)
        {
            for (int j = i; j < n;j++)
            {
                prod = words[i].length() * words[j].length();
                maxi = max(prod, maxi);
            }
        }
        return maxi;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    Solution obj;
    int ans = obj.maxProduct(nums);
    cout << ans << endl;
    return 0;
}
