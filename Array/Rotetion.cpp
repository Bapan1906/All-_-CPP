#include <iostream>
#include<vector>
using namespace std;
void rotation(int arr[], int n, int k)
{
    vector<int> v;
    for (int i = k; i < n; i++)
    {
        v.push_back(arr[i]);
    }

    for (int i = 0; i < k; i++)
    {
        v.push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }
    
}

void printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    rotation(arr, 5, 2);
    printing(arr, 5);

    return (0);
}