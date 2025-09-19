#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinctInWindow(vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    vector<int> result;

    // Process first window
    for (int i = 0; i < k; i++)
        freq[arr[i]]++;
    result.push_back(freq.size());

    // Process remaining windows
    for (int i = k; i < arr.size(); i++) {
        // Remove outgoing element
        freq[arr[i - k]]--;
        if (freq[arr[i - k]] == 0)
            freq.erase(arr[i - k]);

        // Add incoming element
        freq[arr[i]]++;

        result.push_back(freq.size());
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;

    vector<int> ans = countDistinctInWindow(arr, k);
    for (int x : ans) cout << x << " ";
    return 0;
}
