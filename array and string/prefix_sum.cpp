#include <iostream>
#include <vector>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> computePrefixSum(std::vector<int>& arr) {
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum;
}

int getSubarraySum(std::vector<int>& prefixSum, int start, int end) {
    if (start == 0) {
        return prefixSum[end];
    } else {
        return prefixSum[end] - prefixSum[start - 1];
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> prefixSum = computePrefixSum(arr);

    int subarraySum = getSubarraySum(prefixSum, 1, 3);
    std::cout << "Sum of subarray: " << subarraySum << std::endl;
    vector<int> ans = computePrefixSum(arr);
    for(auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
