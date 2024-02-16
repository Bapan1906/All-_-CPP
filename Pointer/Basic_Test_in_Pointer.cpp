#include <iostream>
using namespace std;
int main()
{
    // int *p = 0;
    // cout << *p << endl;

    /*
       int i = 5;

       // pointer initialization
       int *p = 0;
       p = &i;
       cout << p << endl;
       cout << *p << endl;

       //pointer initialization another way.
       int *q = &i;
       cout << q << endl;
       cout << *q << endl;
    */

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;
    int *p = &num;
    cout << "before increment : " << num << endl;
    (*p)++;
    cout << "after increment : " << num << endl;

    // copy one pointer to second pointer.
    int *q = p;
    cout << p << " --" << q << endl;
    cout << *p << "--" << *q << endl;

    // important concept
    int i = 3;
    int *t = &i;
    // cout << *t++ << endl;

    *t = *t + 1;
    cout << *t << endl; 

    cout << "Before increment t velue : " << t << endl;
    t = t + 1;
    cout << "After increment t velue : " << t << endl;

    return (0);
}