#include <iostream>
using namespace std;

int fibo(int n)
{
    // Base Case.
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // Recursive Case.
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of terms of fibonacci series : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << " ";
    }
    cout << endl;

    return (0);
}