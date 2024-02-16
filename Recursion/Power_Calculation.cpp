#include <iostream>
using namespace std;
long long int power(int a, int b)
{
    // Base Case.
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // Recursive Call.
   long long int ans = power(a, b / 2);

    // IF b is even.
    if (b % 2 == 0)
    {
        return (ans * ans);
    }
    else
    {
        // IF b is odd.
        return (a * (ans * ans));
    }
}

int main()
{
    int a;
    cout << "Enter the value of n : " << endl;
    cin >> a;
    int b;
    cout << "Enter the power : " << endl;
    cin >> b;

    long long int ans = power(a, b);
    cout <<" Answer is ---> "<< ans << endl;
    return (0);
}