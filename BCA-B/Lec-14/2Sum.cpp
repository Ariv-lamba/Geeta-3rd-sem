#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    unordered_set<int> s;

    for (int num : arr) {
        int complement = target - num;
        if (s.find(complement) != s.end()) {
            cout << "Pair found: (" << num << ", " << complement << ")\n";
            return true;
        }
        s.insert(num);
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    if (!twoSum(arr, target)) {
        cout << "No pair found\n";
    }

    return 0;
}
