#include <iostream>
using namespace std;

// Print the array from start to end.
void print(int arr[], int s, int e)
{
    cout << "Steps : ";
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key)
{
    cout << endl;
    print(arr, s, e); // Call the printing function.

    // Base Case.
    if (s > e) // Element is not Found.
    {
        return false;
    }

    int mid = s + (e - s) / 2; // Corrected the calculation of mid.
    cout << "Value of array mid : " << arr[mid] << endl;

    if (arr[mid] == key) // Element is Found.
    {
        return true;
    }

    // Recursive Case.
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key); // Recursive Call to Binary Search Function.
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key); // Recursive Call to Binary Search Function.
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6; // Corrected the size to 6.
    int key;
    cout << "Enter the key element : " << endl;
    cin >> key;

    int ans = binarySearch(arr, 0, size - 1, key); // Corrected the range.
    cout << endl;
    // cout << "Present or NOT : " << ans << endl;

    if (ans)
    {
        cout << "value is present...  " << endl;
    }
    else
    {
        cout << "Value is not present..." << endl;
    }

    return 0;
}
