#include <iostream>
using namespace std;

void sorting(int arr[], int n)
{
    // Base case: If the array contains only one element, it's already sorted.
    if (n <= 1)
    {
        return;
    }
    
    // Sort the first (n-1) elements of the array.
    sorting(arr, n - 1);

    // Insert the last element of the array into its correct position.
    int lastElement = n - 1;
    int j = n - 2;

    while (j >= 0 && arr[j] > lastElement)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = lastElement;
}

void printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 5, 4, 3, 2, 1};

    sorting(arr, 6);
    printing(arr, 6);

    return (0);
}