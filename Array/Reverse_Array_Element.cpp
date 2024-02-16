#include <iostream>
using namespace std;

// for reverse element.

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

// for printing function.

void printingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
         
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array." << endl;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // function calling.

    reverse(arr, 5);
    printingArray(arr, 5);

    return (0);
}