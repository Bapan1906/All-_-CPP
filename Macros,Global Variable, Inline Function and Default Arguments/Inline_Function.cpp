#include <iostream>
using namespace std;

inline int getSum(int &a, int &b) // Using Reference Variables.
{
    return (a > b) ? a : b; // Ternary Operater.
}

int main()
{
    int a = 2, b = 3;
    int ans = 0;

    ans = getSum(a, b);
    cout << ans << endl;

    a = a + 2;
    b = b + 3;

    ans = getSum(a, b);
    cout << ans << endl;

    return(0);
} 