#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, binary_search
using namespace std;

int main() {
    // 🔹 Create and initialize a vector
    vector<int> v = {50, 10, 30, 20, 40};

    // 🔹 Display original vector
    cout << "Original vector: ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // 🔹 Sort the vector in ascending order
    sort(v.begin(), v.end());
    cout << "After sorting (ascending): ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // 🔹 Reverse the vector (descending order)
    reverse(v.begin(), v.end());
    cout << "After reversing (descending): ";
    for (int num : v)
        cout << num << " ";
    cout << endl;

    // 🔹 Binary search works only on sorted (ascending) data
    // So, let's sort it again before searching
    sort(v.begin(), v.end());

    int key = 30;
    if (binary_search(v.begin(), v.end(), key))
        cout << key << " is present in the vector." << endl;
    else
        cout << key << " is NOT present in the vector." << endl;

    // 🔹 Searching for a missing element
    int missing = 100;
    if (binary_search(v.begin(), v.end(), missing))
        cout << missing << " is present in the vector." << endl;
    else
        cout << missing << " is NOT present in the vector." << endl;

    return 0;
}
