#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int space = n-row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;

        while (col <= row)
        {
            cout << "*"
                 << " "; // only for star print.

            col++;
        }

        cout << endl;
        row++;
    }

    return (0);
}
