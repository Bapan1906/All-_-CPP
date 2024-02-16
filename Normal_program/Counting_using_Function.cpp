#include <iostream>
using namespace std;

//Function Signature.

void printCounting(int a)
{
    //Function Body.

    for (int i = 1; i <= a; i++)
    {
        cout << i <<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    //function call.
    
    printCounting(n);
    return (0);
}