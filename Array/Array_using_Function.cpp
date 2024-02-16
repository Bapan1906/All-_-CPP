#include <iostream>
#include <limits.h>
using namespace std;

// for finding maximum element.

int getmax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// for finding minimum element.

int getmin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int size;
    cout << "Enter the size of an Array. " << endl;
    cin >> size;

    // Array Decleration.

    int arr[1000];

    // for taking input.

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximun element is " << getmax(arr, size) << endl;
    cout << "Minimum element is " << getmin(arr, size) << endl;

    return (0);
}