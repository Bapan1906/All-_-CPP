#include <iostream>
using namespace std;

int fastElement(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = ((s + e) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = ((s + e) / 2);
    }
    return ans;
}

int lastElement(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = ((s + e) / 2);
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = ((s + e) / 2);
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    int fast = fastElement(arr, 5, 3);
    cout << "First element of 3 is at Index : " << fast << endl;

    int last = lastElement(arr, 5, 3);
    cout << "Last element of 3 is at Index : " << last << endl;

    int total = (last - fast) + 1;
    cout << "Total number of Element: " << total << endl;

    return (0);
}