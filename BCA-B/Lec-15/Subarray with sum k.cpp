#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool subarrayWithSumK(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSum;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum == k) return true;  // subarray from start

        if (prefixSum.find(sum - k) != prefixSum.end()) return true;

        prefixSum[sum] = i;
    }
    return false;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter target sum k: ";
    cin >> k;

    if (subarrayWithSumK(nums, k))
        cout << "Subarray with sum " << k << " exists!" << endl;
    else
        cout << "No subarray with sum " << k << " found." << endl;

    return 0;
}
