#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        // check every bit (0 to 31)
        for (int i = 0; i < 32; i++) {
            int sum = 0;

            // count how many numbers have i-th bit set
            for (int num : nums) {
                int bit = (num >> i) & 1;
                sum = (sum + bit) % 3;
            }

            // if remainder is 1, that bit belongs to the unique number
            if (sum != 0) {
                ans |= (1 << i);
            }
        }
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
    int result = sol.singleNumber(nums);

    cout << "The single number is: " << result << endl;
    return 0;
}
