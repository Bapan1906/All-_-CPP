#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    // Base case.
    if (n == 0)
    {
        return;
    }

    // Processing.
    int digit = n % 10;
    n = n / 10;

    // Recursive call.
    sayDigit(n, arr);
    cout << arr[digit] << endl;
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    sayDigit(n, arr);

    return (0);
}