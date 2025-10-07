#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 🔹 Declare a deque of integers
    deque<int> dq;

    // 🔹 Inserting elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // 🔹 Inserting elements at the front
    dq.push_front(5);
    dq.push_front(2);

    // 🔹 You can also insert using a loop
    for (int i = 40; i <= 60; i += 10) {
        dq.push_back(i);
    }

    // 🔹 Display all elements
    cout << "Elements in deque: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    // 🔹 Display front and back elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // 🔹 Pop (remove) elements from both ends
    cout << "\nRemoving front element: " << dq.front() << endl;
    dq.pop_front();

    cout << "Removing back element: " << dq.back() << endl;
    dq.pop_back();

    // 🔹 Display all elements after popping
    cout << "\nAfter removing from both ends: ";
    for (auto x : dq) cout << x << " ";
    cout << endl;

    // 🔹 Accessing elements using index
    cout << "Element at index 2: " << dq[2] << endl;

    // 🔹 Display size and check if empty
    cout << "\nSize of deque: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // 🔹 Clearing the deque
    dq.clear();
    cout << "After clearing, size = " << dq.size() << endl;

    return 0;
}
