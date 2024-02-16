#include <iostream>
#include <limits.h>
using namespace std;

// Find largest row sum.
int largerstRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = (sum + arr[row][col]);
        }
        if (sum > maxi) // check.
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "The maximum sum is : " << maxi << endl;

    return rowIndex;
}

int main()
{
    int arr[3][4];

    cout << "Enter the array element : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << " Printing array element : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // calling largestRowSum Function.
    int ansIndex = largerstRowSum(arr, 3, 4);
    cout << "Max row is at index : " << ansIndex << endl;

    return (0);
}