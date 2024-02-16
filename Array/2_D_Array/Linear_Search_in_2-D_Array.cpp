#include <iostream>
using namespace std;

// searching function
bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // creating 2-d array.
    int arr[3][4];

    // taking input row wise.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing 2-d array.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // target element
    int target;
    cout << "Enter your taeget " << endl;
    cin >> target;

    // Searching function calling.
    if (isPresent(arr, target, 3, 4))
    {
        cout << " Targer is Found " << endl;
    }
    else
    {
        cout << "Target is not Found " << endl;
    }

    return (0);
}