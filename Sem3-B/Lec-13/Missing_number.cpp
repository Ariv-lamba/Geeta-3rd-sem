#include <iostream>
#include <vector>
using namespace std;

int missingNumberXOR(vector<int>& arr, int n) {
    int xor1 = 0, xor2 = 0;

    // XOR of all numbers from 1 to n
    for (int i = 1; i <= n; i++) xor1 ^= i;

    // XOR of all elements in array
    for (int x : arr) xor2 ^= x;

    // Missing number is difference
    return xor1 ^ xor2;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    cout << "Missing Number (XOR Approach): " << missingNumberXOR(arr, n) << endl;

    return 0;
}









/*

#include <iostream>
#include <vector>
using namespace std;

int missingNumberBrute(vector<int>& arr, int n) {
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) return i;
    }
    return -1; // not possible
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    cout << "Missing Number (Brute Force): " << missingNumberBrute(arr, n) << endl;

    return 0;
}

*/