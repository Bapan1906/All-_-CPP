#include <iostream>
using namespace std;

void merge(int *arr, int left, int right)
{
    int mid = (left + right) / 2;

    // Calculate length of leftPart and rightPart.
    int leftPart = mid - left + 1; // Corrected variable names
    int rightPart = right - mid;

    // Create two new arrays.
    int *first = new int[leftPart];
    int *second = new int[rightPart];

    // Copy values from the main array to the new arrays.
    int mainArrayIndex = left;
    for (int i = 0; i < leftPart; i++)
    {
        first[i] = arr[mainArrayIndex]; // Copy to the first array.
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < rightPart; i++)
    {
        second[i] = arr[mainArrayIndex]; // Copy to the second array.
        mainArrayIndex++;
    }

    // Merge two sorted arrays.
    int index1 = 0; // For the first array.
    int index2 = 0; // For the second array.
    mainArrayIndex = left;

    while (index1 < leftPart && index2 < rightPart)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else
        {
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }

    while (index1 < leftPart)
    {
        arr[mainArrayIndex] = first[index1];
        mainArrayIndex++;
        index1++;
    }

    while (index2 < rightPart)
    {
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }

    // Clean up the dynamically allocated memory.
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int left, int right)
{
    // Base case.
    if (left >= right)
    {
        return;
    }

    // Calculate the midpoint.
    int mid = (left + right) / 2;

    // Sort the left part.
    mergeSort(arr, left, mid);

    // Sort the right part.
    mergeSort(arr, mid + 1, right);

    // Merge the left and right parts.
    merge(arr, left, right);
}

// Printing Function.
void print(int *arr, int n)
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

    mergeSort(arr, 0, n - 1);

    print(arr, n);

    return 0;
}
