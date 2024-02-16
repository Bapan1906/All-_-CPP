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
        int space = n - row; // print 1st Traingle.
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1; // print 2nd Traingle.
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }

        int start = (row - 1); // print 3rd Traingle.
        while (start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        row++;
    }
    return (0);
}