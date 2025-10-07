#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;  // map declaration (key = int, value = string)
    int n;

    cout << "Enter number of pairs: ";
    cin >> n;

    // 🔹 Taking input (key-value pairs)
    cout << "Enter " << n << " pairs (key value):\n";
    for (int i = 0; i < n; i++) {
        int key;
        string value;
        cin >> key >> value;
        mp[key] = value; // insert key-value pair
    }

    // 🔹 Printing all key-value pairs
    cout << "\nMap elements (sorted by key):\n";
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // 🔹 Searching a key
    int key;
    cout << "\nEnter key to search: ";
    cin >> key;

    if (mp.find(key) != mp.end()) {
        cout << "Found! Value = " << mp[key] << endl;
    } else {
        cout << "Key not found!\n";
    }

    // 🔹 Inserting a new key-value pair
    int newKey;
    string newValue;
    cout << "\nEnter a new key and value to insert: ";
    cin >> newKey >> newValue;
    mp[newKey] = newValue;

    cout << "After insertion:\n";
    for (auto it : mp) cout << it.first << " -> " << it.second << endl;

    // 🔹 Deleting a key
    int delKey;
    cout << "\nEnter key to delete: ";
    cin >> delKey;
    mp.erase(delKey);

    cout << "After deletion:\n";
    for (auto it : mp) cout << it.first << " -> " << it.second << endl;

    // 🔹 Showing size and checking if empty
    cout << "\nSize of map = " << mp.size() << endl;
    if (mp.empty()) cout << "Map is empty.\n";
    else cout << "Map is not empty.\n";

    // 🔹 Clearing the map
    mp.clear();
    cout << "After clearing, size = " << mp.size() << endl;

    return 0;
}
