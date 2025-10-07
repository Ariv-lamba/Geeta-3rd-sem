#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_front(5);
    for(int x : l1)
        cout << x << " ";

    list<int> l = {10, 2, 5, 20};
    l.pop_front();
    l.pop_back();
    for(auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";
    
    return 0;
}