#include <iostream>
using namespace std;

// Function for Printing the value.
void print(int *ptr)
{
    cout << *ptr << endl;
}

void update(int *ptr)
{
    ptr = ptr + 1; // For address.
    *ptr = *ptr + 1;
}

int main()
{
    int value = 5;
    int *ptr = &value;

    cout << "Before Update : " << ptr << endl; // address printing

    update(ptr);
    cout << "After update : " << ptr << endl; //// address printing

    cout << "VAlues : " << *ptr << endl;

    print(ptr);
    return (0);
}