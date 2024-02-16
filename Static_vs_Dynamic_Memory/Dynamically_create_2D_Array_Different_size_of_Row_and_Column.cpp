#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the size of Row : " << endl;
    cin >> row;
    int col;
    cout << "Enter the size of Column : " << endl;
    cin >> col;

    // Creating 2D Array.
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Taking input.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Taking output.
    cout << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Relesing Memory.
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return (0);
}