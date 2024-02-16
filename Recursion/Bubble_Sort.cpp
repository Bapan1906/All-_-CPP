#include <iostream>
using namespace std;

// Bubble Sorting Function.
void sortArray(int arr[], int size)
{
    // Base Case.
    if (size == 0 || size == 1)
    {
        return;
    }

    // One pass of Bubble Sort.
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the remaining part.
    sortArray(arr, size - 1);
}

// Printing Function.
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sortArray(arr, size);

    cout << "Sorted array elements are: " << endl;
    printArray(arr, size); // Pass the correct size here

    return 0;
}
