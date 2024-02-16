#include <iostream>
using namespace std;
int main()
{

    int i = 5;

    // Creating Reference Variables.
    int &j = i;

    // Before Increment.
    cout << " i --> " << i << endl;
    cout << " j --> " << j << endl;

    i++;
    // After Increment.
    cout << " i --> " << i << endl;

    j++;
    cout << " j --> " << j << endl;
    cout << " i --> " << i << endl;

    return (0);
}