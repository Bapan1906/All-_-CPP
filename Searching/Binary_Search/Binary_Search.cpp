#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // int mid = ((start + end) / 2);

    int mid = start + (end - start) / 2; // optimized.

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid = ((start + end) / 2);

        mid = start + (end - start) / 2; // optimized.
    }
    return -1;
}

int main()
{
    int even[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    int odd[5] = {3, 4, 5, 6, 7};

    int evenIndex = binarySearch(even, 8, 8);
    cout << " index of 8 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 6);
    cout << "index of 6 is : " << oddIndex << endl;

    return (0);
}