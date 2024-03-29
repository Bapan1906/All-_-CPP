#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base Case.
    if (n == 0)
        return 1;

    int smallerProblem = factorial(n - 1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
        // or

    // return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;
    return (0);
}