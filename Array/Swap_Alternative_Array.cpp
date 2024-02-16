#include <iostream>
using namespace std;

void swapping(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i + 1], arr[i]);
        }
    }
}

int printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
         
    }
}
int main()
{
    int arr1[10] = {5, 6, 9, 8, 7, 1, 2, 3, 0, 6};
    int arr2[8] = {8, 6, 4, 2, 1, 3, 9, 8};

    swapping(arr1, 10);
    printingArray(arr1, 10);

    // swapping(arr2, 8);
    // printingArray(arr2, 8);

    return (0);
}