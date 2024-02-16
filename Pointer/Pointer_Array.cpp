#include <iostream>
using namespace std;
int main()
{
    /*
        int arr[10] = {5, 6, 1, 7, 8, 2, 3, 9, 0};


       // Print Address of the first element.
       cout << "Address of the first element : " << arr << endl;
       cout << "Address of the first element : " << &arr[0] << endl;

       // printing value.
       cout << "Value at 0th Index : " << *arr << endl;
       cout << "Value at 1st Index : " << *arr + 1 << endl;
       cout << "Value at 1st Index : " << *(arr + 1) << endl;
       cout << "Value at 1st Index : " << *(arr) + 1 << endl;

       cout << " VAlue at 2nd Index : " << arr[2] << endl;
       cout << " VAlue at 2nd Index : " << *(arr + 2) << endl;

       int i = 3;
       cout << "Value at 3rd Index : " << i[arr] << endl;



     // Check size.
        int temp[10];
        cout << "Size of array : " << sizeof(temp) << endl;

        int *ptr = &temp[0];
        cout << "Size of pointer : " << sizeof(ptr) << endl;

        int a[10] = {1, 2};
        cout << "1st " << sizeof(*a) << endl;
        cout << "2nd " << sizeof(&a) << endl;
   */

    /*
       int ar[20] = {2, 3, 6, 5, 6};
       cout << "--> " << &ar[0] << endl;
       // cout << &ar << endl; // Same Result.

       int *p = &ar[0];
       cout << "--> " << &p << endl;
       // cout << *p << endl; //Same Result.

    */

    int arr[10];
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return (0);
}