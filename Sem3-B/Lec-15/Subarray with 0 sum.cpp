#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void findSubarrayWithZeroSum(const vector<int>& arr) {
    unordered_map<int, int> sumIndex;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == 0) {
            cout << "Subarray with zero sum found from index 0 to " << i << endl;
            return;
        }
        if (sumIndex.find(sum) != sumIndex.end()) {
            cout << "Subarray with zero sum found from index " << sumIndex[sum] + 1 << " to " << i << endl;
            return;
        }
        sumIndex[sum] = i;
    }
    cout << "No subarray with zero sum found" << endl;
}

int main() {
    int n;
     cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    findSubarrayWithZeroSum(arr);
    return 0;
}
