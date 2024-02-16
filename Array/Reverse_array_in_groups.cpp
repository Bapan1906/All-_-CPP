#include <iostream>
using namespace std;

void reverse(int arr[], int n, int k)
{
    for (int i = 0; i < n; i = i + k)
    {
        int start = 0;
        int end = min(i + k - 1, n - 1);

        while (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

void printingArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5, 2);
    cout << "Reversre array is : " << endl;
    printingArray(arr, 5);
    return (0);
}