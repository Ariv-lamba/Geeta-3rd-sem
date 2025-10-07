#include <bits/stdc++.h>
using namespace std;

int main() {
    // 🔹 Declaration of a set (stores unique elements in sorted order)
    set<int> s;

    // 🔹 Input elements into the set
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);  // duplicates will automatically be ignored
    }

    // 🔹 Print all elements of the set
    cout << "\nElements of set (sorted & unique): ";
    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;

    // 🔹 Searching for an element in the set
    int key;
    cout << "\nEnter element to search: ";
    cin >> key;
    if (s.find(key) != s.end())
        cout << key << " is present in the set.\n";
    else
        cout << key << " is NOT present in the set.\n";

    // 🔹 Inserting a new element
    int newElement;
    cout << "\nEnter element to insert: ";
    cin >> newElement;
    s.insert(newElement);
    cout << "After inserting " << newElement << ": ";
    for (auto it : s) cout << it << " ";
    cout << endl;

    // 🔹 Deleting an element by value
    int delElement;
    cout << "\nEnter element to delete: ";
    cin >> delElement;
    s.erase(delElement);  // if element not found, nothing happens
    cout << "After deleting " << delElement << ": ";
    for (auto it : s) cout << it << " ";
    cout << endl;

    // 🔹 Size, empty, and clear functions
    cout << "\nCurrent size of set = " << s.size() << endl;
    cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;

    // 🔹 Demonstrate erase by iterator (removes first element)
    if (!s.empty()) {
        cout << "Deleting first element (" << *s.begin() << ") using iterator.\n";
        s.erase(s.begin());
    }

    cout << "Set after deleting first element: ";
    for (auto it : s) cout << it << " ";
    cout << endl;

    // 🔹 Clear all elements
    s.clear();
    cout << "\nAfter clearing, size of set = " << s.size() << endl;
    cout << "Is set empty now? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
