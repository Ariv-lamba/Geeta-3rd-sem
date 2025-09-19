#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // to avoid overflow

        if (arr[mid] == target) {
            return mid; // found at index mid
        }
        else if (arr[mid] < target) {
            low = mid + 1; // search right half
        }
        else {
            high = mid - 1; // search left half
        }
    }

    return -1; // not found
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
