#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {10, 15, 15, 20, 20,};
    l.unique();
    l.sort();
    l.reverse();
    for(int x : l)
        cout << x << " ";
    return 0;
}