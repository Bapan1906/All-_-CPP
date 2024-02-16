#include <iostream>
using namespace std;

// Partition function.
int partition(int arr[], int s, int e)
{
    int pivot = arr[s]; // First element is the pivot element.
    int count = 0;
    for (int i = s + 1; i <= e; i++) // Fix the loop condition
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = s + count; // We got the right place of the pivot element.
    swap(arr[pivotIndex], arr[s]);

    // Here we will take care of the left and right parts.
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot) // Fix the comparison operator
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

// Quichk Sort function.
void quickSort(int arr[], int s, int e)
{
    // Base Case.
    if (s >= e)
    {
        return;
    }

    // Partition function Call.
    int p = partition(arr, s, e);

    // Recursive Calls.
    quickSort(arr, s, p - 1); // We will sort the left part.
    quickSort(arr, p + 1, e); // We will sort the right part.
}

// Printing Function.
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
    int n = 6;

    quickSort(arr, 0, n - 1);
    printing(arr, n);

    return 0;
}
