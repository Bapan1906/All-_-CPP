#include <iostream>
using namespace std;

int update(int arr[], int n)
{
    cout << "Inside the function." << endl;

    // updating array's first element.

    arr[0] = 120;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    cout << "Going back to main Function." << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // For printing
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    return (0);
}