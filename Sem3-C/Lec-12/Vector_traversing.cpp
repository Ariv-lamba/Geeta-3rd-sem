#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

// 1. Print elements of vector
void printVector(const vector<int>& v) {
    cout << "Array Elements: ";
    for(int x : v) cout << x << " ";
    cout << endl;
}

// 2. Find maximum element
int findMax(const vector<int>& v) {
    int mx = v[0];
    for(int x : v) {
        if(x > mx) mx = x;
    }
    return mx;
}

// 3. Find minimum element
int findMin(const vector<int>& v) {
    int mn = v[0];
    for(int x : v) {
        if(x < mn) mn = x;
    }
    return mn;
}

// 4. Find sum of elements
int findSum(const vector<int>& v) {
    int sum = 0;
    for(int x : v) sum += x;
    return sum;
}

// 5. Reverse the array
void reverseArray(vector<int>& v) {
    reverse(v.begin(), v.end()); // STL reverse function
}

// 6. Search an element (linear search)
bool linearSearch(const vector<int>& v, int key) {
    for(int x : v) {
        if(x == key) return true;
    }
    return false;
}

// ------------------ MAIN FUNCTION ------------------
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    // 1. Print
    printVector(arr);

    // 2. Max and Min
    cout << "Maximum Element: " << findMax(arr) << endl;
    cout << "Minimum Element: " << findMin(arr) << endl;

    // 3. Sum
    cout << "Sum of Elements: " << findSum(arr) << endl;

    // 4. Reverse
    reverseArray(arr);
    cout << "Array after Reverse: ";
    printVector(arr);

    // 5. Linear Search
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    if(linearSearch(arr, key))
        cout << key << " is Found in array" << endl;
    else
        cout << key << " is Not Found in array" << endl;

    return 0;
}
