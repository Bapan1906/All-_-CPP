#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
        i++;
    }
}

int printArry(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}


int main()
{
    int arr[6] = {6, 5, 4, 3, 2, 1};
    
    insertionSort(arr, 6);
    cout << " Sorted array is : \n";
    printArry(arr, 6);

    return (0);
}