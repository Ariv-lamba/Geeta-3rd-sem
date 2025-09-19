#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;

        // XOR of all numbers
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ nums[i];
        }

        // Find the rightmost set bit
        int j = 0;
        while (((xorr >> j) & 1) == 0) {
            j++;
        }

        int x1 = 0, x2 = 0;

        // Divide numbers into 2 groups based on j-th bit
        for (int i = 0; i < n; i++) {
            if (((nums[i] >> j) & 1) == 1) {
                x1 ^= nums[i];
            } else {
                x2 ^= nums[i];
            }
        }

        vector<int> ans(2);
        ans[0] = x1;
        ans[1] = x2;
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    vector<int> result = sol.singleNumber(nums);

    cout << "The two single numbers are: " << result[0] << " and " << result[1] << endl;
    return 0;
}
