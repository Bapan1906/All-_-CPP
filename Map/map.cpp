#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m; // creating map.

    m[1] = "bapan"; // insert key and value.
    m[2] = "biplab";
    m[3] = "abhijit";
    m[4] = "akash";

    cout << "Before erase : " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding element : " << m.count(2) << endl; // for finding element.
    cout << endl;

    m.erase(3); // delete the element.

    cout << "After erase : " << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // finding element.

    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return (0);
}