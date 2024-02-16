#include <iostream>
using namespace std;

// Print all steps.
void print(int arr[], int n)
{
    cout << "Size of array is : " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{
    print(arr, size); // Calling Printing Function.

    // Base Case.
    if (size == 0)
    {
        return false;
    }

    // Recursive case.
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        // The correct recursive call should be:
        return linearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;

    // Linear Function Calling.
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Element is Present..." << endl;
    }
    else
    {
        cout << "Element is NOT present..." << endl;
    }

    return 0;
}
