#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> s; // creating set.

    s.insert(3); // insert element.
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // delete element.

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    cout << "After deleting : " << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not : " << s.count(5) << endl; // check value present or not.

    // find the value.
    set<int>::iterator itr = s.find(5);

    cout << "find element : " << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return (0);
}