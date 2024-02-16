#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    print(arr, 6);

    // print(arr,6,2)

    cout << " " << endl;
    return (0);
}