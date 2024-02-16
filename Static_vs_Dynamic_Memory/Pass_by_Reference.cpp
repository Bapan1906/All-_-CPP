#include <iostream>
using namespace std;
int update(int &n) // Reference Variable.
{
    n++;
}

int main()
{
    int n = 5;
    cout << "Before : " << n << endl;

    update(n);
    cout << "After : " << n << endl;

    return (0);
}