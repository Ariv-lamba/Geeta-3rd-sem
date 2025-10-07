#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> list = {10, 15, 20};
    list.push_front(5);
    list.push_front(3);
    list.pop_front();
    for (int x : list)
        cout << x << " ";
    return 0;
}