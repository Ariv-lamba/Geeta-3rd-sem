#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    auto it = l.begin();
    it++;
    it = l.insert(it, 15);
    l.insert(it, 2, 7);
    cout << l.front() << " " << l.back();
    cout << " " << l.size();




    list<int> l1 = {10, 20, 30, 40, 20, 40};
    auto it1 = l1.begin();
    it1 = l1.erase(it1);
    l1.remove(40);
    for(int x : l1)
        cout << x << " ";


    return 0;
}