#include <iostream>
using namespace std;
int main()
{
    char ch[6] = {"abcde"};
    // In char arr print entire array.
    cout << ch << endl;

    char *ptr = &ch[0];
    // In char pointer array print entire array.
    cout << ptr << endl;

    //It will begin printing and you will move to next memory block will not stop until you get a null charcter. 
    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
    return (0);
}