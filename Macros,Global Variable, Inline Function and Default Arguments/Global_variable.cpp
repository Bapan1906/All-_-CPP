#include <iostream>
using namespace std;

int scope = 15; // Global Variable.

void a(int &i)
{
    cout << i << endl;

    cout << "Scope of a : " << scope << endl;
}
void b(int &i)
{
    cout << i << endl;

    cout << "Scope of b : " << scope << endl;
}

int main()
{
    int i = 5;
    cout << i << endl;

    cout << "Scope of main : " << scope << endl;
    a(i);
    b(i);

    return (0);
}