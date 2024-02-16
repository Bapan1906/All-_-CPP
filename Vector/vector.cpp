#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // ctrate a vector.

   /*
    vector<int> a(5, 1); // create another way.

    vector<int> last(a); // copy a in another vector.

    cout << "print last : ";
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    
    */

    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1); // insert element of a vector.
    v.push_back(2); // insert element of a vector.
    v.push_back(3); // insert element of a vector.

    cout << "Capacity : " << v.capacity() << endl;

    cout << "size of a vector : " << v.size() << endl;

    cout << "Element at index 2 : " << v.at(2) << endl;

    cout << "Front Element : " << v.front() << endl;
    cout << "Back Element : " << v.back() << endl;

    cout << "Before pop : " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After pop : " << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before cleare size : " << v.size() << endl;

    v.clear();
    cout << "After clear size : " << v.size() << endl;

    return (0);
}