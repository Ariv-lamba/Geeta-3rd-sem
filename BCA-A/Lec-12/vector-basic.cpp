#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> v;

    // 1. push_back() - add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "After push_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 2. pop_back() - remove last element
    v.pop_back();
    cout << "After pop_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 3. size() - number of elements
    cout << "Size of vector: " << v.size() << endl;

    // 4. empty() - check if vector is empty
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 5. front() and back()
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // 6. at(index) - access element at index
    cout << "Element at index 1: " << v.at(1) << endl;

    // 7. clear() - remove all elements
    v.clear();
    cout << "After clear, is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}
