#include <iostream>
using namespace std;

long long int squareRoot(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePression(int n, int pression, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < pression; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int tempsol = squareRoot(n);

    cout << "Answer is " << morePression(n, 3, tempsol) << endl;

    return (0);
}