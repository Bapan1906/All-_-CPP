#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; // creating a vector.

    v.push_back(1); // insert value.
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // find the element.
    cout << "finding 6 : " << binary_search(v.begin(), v.end(), 6);
    cout << endl;

    cout << "Lower Bound : " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper Bound : " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    // finding max min.
    int a = 5;
    int b = 9;
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;

    // swap the values.

    swap(a, b);
    cout << "a -> " << a << endl;

    // Reverse of a string.

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "string : " << s << endl;

    rotate(v.begin(), v.end() + 1, v.end());
    cout << "After rotate : " << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;
    
    // sorting.

    cout << "After sorting -> " << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << endl;
    }

    return (0);
}