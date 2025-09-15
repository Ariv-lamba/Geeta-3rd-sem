
#include <iostream>
#include <vector>
using namespace std;

int findRepeatingXOR(vector<int>& arr) {
    int n = arr.size() - 1; // numbers are from 1..n
    int xor1 = 0, xor2 = 0;

    // XOR of all numbers 1..n
    for (int i = 1; i <= n; i++) xor1 ^= i;

    // XOR of all array elements
    for (int x : arr) xor2 ^= x;

    return xor1 ^ xor2; // gives repeating number
}

int main() {
    int n;
    cout << "Enter n (range is 1..n, array has n+1 elements): ";
    cin >> n;

    vector<int> arr(n + 1);
    cout << "Enter " << n + 1 << " elements: ";
    for (int i = 0; i <= n; i++) cin >> arr[i];

    cout << "Repeating Number (XOR Approach): " << findRepeatingXOR(arr) << endl;
    return 0;
}



/*
#include <iostream>
#include <vector>
using namespace std;

int findRepeatingBrute(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) return arr[i];
        }
    }
    return -1; // not possible
}

int main() {
    int n;
    cout << "Enter size of array (n+1): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Repeating Number (Brute Force): " << findRepeatingBrute(arr) << endl;
    return 0;
}
*/