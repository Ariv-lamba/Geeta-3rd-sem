#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach (O(n^2))
vector<int> leadersBrute(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}

// Optimal Approach (O(n))
vector<int> leadersOptimal(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n - 1]; // last element is always a leader
    leaders.push_back(maxRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    // Reverse to maintain left-to-right order
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nLeaders (Brute Force): ";
    vector<int> res1 = leadersBrute(arr);
    for (int x : res1) cout << x << " ";

    cout << "\nLeaders (Optimal): ";
    vector<int> res2 = leadersOptimal(arr);
    for (int x : res2) cout << x << " ";

    return 0;
}
