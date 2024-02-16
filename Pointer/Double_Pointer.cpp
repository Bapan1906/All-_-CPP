#include <iostream>
using namespace std;

void upadte(int **ptr)
{
    // ptr = ptr + 1; // No Change.

    //*ptr = *ptr + 1; // Change.

    **ptr = **ptr + 1; // Change.
}

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    /*
        cout << "Printing ptr : " << ptr << endl;
        cout << "Address of ptr : " << &ptr << endl;
        cout << *ptr << endl;

        // Printing The value of i.
        cout << i << endl;
        cout << *ptr << endl;
        cout << **ptr2 << endl;

        // Printing Address of ptr block.
        cout << &i << endl;
        cout << ptr << endl;
        cout << *ptr2 << endl;

        // Printing ptr2 block.
        cout << &ptr << endl;
        cout << ptr2 << endl;

    */

    cout << endl << endl;
    cout << "Before : " << i << endl;
    cout << "Before : " << ptr << endl;
    cout << "Before : " << ptr2 << endl;

    upadte(ptr2);

    cout << "After : " << i << endl;
    cout << "After : " << ptr << endl;
    cout << "After : " << ptr2 << endl;
    cout << endl << endl;

    return (0);
}