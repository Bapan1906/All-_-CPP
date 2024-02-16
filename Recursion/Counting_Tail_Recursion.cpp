#include <iostream>
using namespace std;

void count(int n)
{
    // Base Case.
    if (n == 0)
    {
        return;
    }

    // Processing.
    cout << n << endl;

    // Recursive Relation.
    count(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    cout << endl;
    count(n);

    return(0);
}