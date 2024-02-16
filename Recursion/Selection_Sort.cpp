#include <iostream>
using namespace std;

void searching(int arr[], int n, int currentIndex = 0)
{
    // Base Case.
    if (currentIndex == n - 1)
    {
        return;
    }

    int minIndex = currentIndex;
    for (int i = currentIndex + 1; i < n; i++) // Corrected loop condition.
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    if (minIndex != currentIndex)
    {
        swap(arr[minIndex], arr[currentIndex]);
    }

    // Recursive Call.
    searching(arr, n, currentIndex + 1);
}

void Printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 5, 4, 3, 2, 1};
    
    searching(arr, 6);
    Printing(arr, 6);

    return 0;
}
