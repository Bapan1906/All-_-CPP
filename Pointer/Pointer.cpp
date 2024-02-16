#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << " " << endl;

    // address of operator.
    cout << "Address of num is : " << &num << endl;

    // creating pointer.
    int *ptr = &num;

    cout << "Address is : " << ptr << endl;

    cout << "Value is : " << *ptr << endl;
    cout << "size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;

    return (0);
}