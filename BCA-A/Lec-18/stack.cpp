#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 🔹 Declare a stack of integers
    stack<int> st;

    // 🔹 Inserting elements using push()
    st.push(10);
    st.push(20);
    st.push(30);

    // 🔹 You can also insert using variables
    int x = 40;
    st.push(x);

    // 🔹 Insert more elements to demonstrate stack behavior
    for (int i = 50; i <= 70; i += 10) {
        st.push(i);
    }

    // 🔹 Display size of stack
    cout << "Size of stack: " << st.size() << endl;

    // 🔹 Display top element
    cout << "Top element: " << st.top() << endl;

    // 🔹 Pop the top element
    cout << "\nPopping the top element: " << st.top() << endl;
    st.pop();

    // 🔹 Display new top element
    cout << "New top element: " << st.top() << endl;

    // 🔹 Print and empty the whole stack
    cout << "\nPopping all elements:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // 🔹 Check if stack is empty
    if (st.empty())
        cout << "Stack is now empty.\n";
    else
        cout << "Stack still has elements.\n";

    return 0;
}
