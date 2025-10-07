#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& nums, int k) {
    unordered_map<int, int> mp; // stores psum -> first index
    int psum = 0, maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        psum += nums[i];

        // If prefix sum equals k, update maxLen
        if (psum == k) 
            maxLen = i + 1;

        // If (psum - k) exists, we found a subarray with sum k
        if (mp.find(psum - k) != mp.end()) 
            maxLen = max(maxLen, i - mp[psum - k]);

        // Store psum if not already stored
        if (mp.find(psum) == mp.end())
            mp[psum] = i;
    }

    return maxLen;
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 6;

    cout << "Longest Subarray Length = " << longestSubarrayWithSumK(nums, k) << endl;
    return 0;
}
