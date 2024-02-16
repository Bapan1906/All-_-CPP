#include <bits/stdc++.h>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++)
    {


        // Find the minimum element in
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the found minimum element
        // with the first element

        if (minIndex != i)
        {
            swap(arr[minIndex], arr[i]);
        }
    }
}

// Function to print an array

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program
int main()
{
     int arr[5] = {64,85,11,28,32};

    // Function Call
    selectionSort(arr, 5);
    cout << "Sorted array: \n";
    printArray(arr, 5);

    return 0;
}
