#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l; // creating a list.

    l.push_back(1); // insert an element.
    l.push_back(2);
    l.push_front(3);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << " Before Erase Size of list : " << l.size() << endl;

    l.erase(l.begin());
    cout << "After Erase : " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After Erase Size of list : " << l.size() << endl;

    return (0);
}