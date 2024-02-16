#include <iostream>
using namespace std;

int factorial(int n) // For Factorial.
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}   

int nCr(int n, int r) // For nCr Calculation.
{
    int num = factorial(n);
    int deno = factorial(r) * factorial(n - r);
    int ans = num / deno;
    return ans;
}

int main()
{
    int n, r;
    cout << "Enter the value of n and r :" << endl;
    cin >> n >> r;
    cout << "Answer is " << nCr(n, r) << endl;
    return (0);
}