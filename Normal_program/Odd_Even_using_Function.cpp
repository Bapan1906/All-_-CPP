#include <iostream>
using namespace std;
bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return (0);
    }
    // even
    else
    {
        return (1);
    }
}

int main()
{
    int num;
    cout << "Enter the value of num:" << endl;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even." << endl;
    }
    else
    {
        cout << "Number is odd." << endl;
    }

    return (0);
}