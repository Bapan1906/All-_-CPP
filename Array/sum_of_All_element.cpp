#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of an Array. " << endl;
    cin >> size;
    int sum = 0;

    // Array Decleration.

    int arr[1000];

    // for taking input.

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Your result is - " << sum << endl;

    return (0);
}