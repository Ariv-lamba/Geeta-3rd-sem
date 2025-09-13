#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithEqualZeroOne(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> mp; // prefixSum -> first index
    int prefixSum = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        // Treat 0 as -1
        prefixSum += (nums[i] == 0 ? -1 : 1);

        if (prefixSum == 0) {
            maxLen = i + 1; // whole subarray from 0..i
        }

        if (mp.find(prefixSum) != mp.end()) {
            maxLen = max(maxLen, i - mp[prefixSum]);
        } else {
            mp[prefixSum] = i; // store first occurrence
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {0, 1, 0, 1, 1, 0, 0};
    cout << "Longest subarray length = " 
         << longestSubarrayWithEqualZeroOne(nums) << endl;
    return 0;
}
