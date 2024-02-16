#include <iostream>
#include <vector>
using namespace std;

void marge(int arr1[], int n, int arr2[], int m, int arr3[]) // marging finction for two array.
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy first array k element.

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // copy second array k element.

    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int ans[], int n) // Printing function.
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    
    int arr3[8] = {0};//output array.

    // Function calling.

    marge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);

    return (0);
}