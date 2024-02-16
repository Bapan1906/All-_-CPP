#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    int a = 0, b = 1, c;

    for (int i = n; i != 1; i--)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return a;

     
}

int main()
{
    int n;
    cout << "Enter the value of n :- " << endl;
    cin >> n;
    cout << " Your result is - " << Fibonacci(n) << endl;
    return (0);
}