#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 🔹 Declare a queue of integers
    queue<int> q;

    // 🔹 Inserting elements using push()
    q.push(10);
    q.push(20);
    q.push(30);

    // 🔹 You can also insert using a variable
    int x = 40;
    q.push(x);

    // 🔹 Insert more elements using a loop
    for (int i = 50; i <= 70; i += 10) {
        q.push(i);
    }

    // 🔹 Display size of queue
    cout << "Size of queue: " << q.size() << endl;

    // 🔹 Display front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // 🔹 Remove (pop) one element from the front
    cout << "\nRemoving front element: " << q.front() << endl;
    q.pop();

    // 🔹 Display new front element
    cout << "New front element: " << q.front() << endl;

    // 🔹 Print and empty the whole queue
    cout << "\nRemoving all elements from queue:\n";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // 🔹 Check if queue is empty
    if (q.empty())
        cout << "Queue is now empty.\n";
    else
        cout << "Queue still has elements.\n";

    return 0;
}
