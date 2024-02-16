#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // Base Case.
    if (size == 0 || size == 1)
    {
        return true;
    }

    // Recursive Case.
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main()
{
    int arr[10] = {5, 6, 3, 7, 8, 9, 4, 1, 2, 10};
    int size = 10;
    int ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is Sorted... " << endl;
    }
    else
    {
        cout << "Array is NOT sorted... " << endl;
    }
    return (0);
}