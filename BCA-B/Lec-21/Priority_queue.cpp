#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 🔹 Declare a MIN-HEAP priority queue
    // Syntax: priority_queue<data_type, vector<data_type>, greater<data_type>>
    priority_queue<int, vector<int>, greater<int>> pq;

    // 🔹 Inserting elements using push()
    pq.push(50);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(40);

    // 🔹 You can also insert using a variable
    int x = 5;
    pq.push(x);

    // 🔹 Display size of heap
    cout << "Size of priority queue: " << pq.size() << endl;

    // 🔹 Display the smallest element (top)
    cout << "Top (smallest) element: " << pq.top() << endl;

    // 🔹 Remove the top element
    cout << "\nRemoving top element: " << pq.top() << endl;
    pq.pop();

    // 🔹 Display new top element
    cout << "New top element: " << pq.top() << endl;

    // 🔹 Print and empty the whole priority queue
    cout << "\nElements in ascending order: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // 🔹 Check if empty
    if (pq.empty())
        cout << "Priority queue is now empty.\n";
    else
        cout << "Priority queue still has elements.\n";

    return 0;
}
