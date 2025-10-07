#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 🔹 Declare a MAX-HEAP priority queue
    // (Default behavior is max-heap)
    priority_queue<int> pq;

    // 🔹 Insert elements using push()
    pq.push(10);
    pq.push(50);
    pq.push(30);
    pq.push(20);
    pq.push(40);

    // 🔹 Insert using a variable
    int x = 60;
    pq.push(x);

    // 🔹 Display size of heap
    cout << "Size of priority queue: " << pq.size() << endl;

    // 🔹 Display the largest element (top)
    cout << "Top (largest) element: " << pq.top() << endl;

    // 🔹 Remove the top element
    cout << "\nRemoving top element: " << pq.top() << endl;
    pq.pop();

    // 🔹 Display new top element
    cout << "New top element: " << pq.top() << endl;

    // 🔹 Print and empty the whole priority queue
    cout << "\nElements in descending order: ";
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
