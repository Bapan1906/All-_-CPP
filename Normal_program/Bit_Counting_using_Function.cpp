#include <iostream>
using namespace std;


int oneBitsInTwoNumbers(int n1, int n2)
{
    int bits1 = 0, bits2 = 0;
    while ((n1 > 0) || (n2 > 0))
    {
        bits1 = bits1 + (n1 & 1);
        bits2 = bits2 + (n2 & 1);
        n1 = n1 >> 1;
        n2 = n2 >> 1;
    }
    return bits1 + bits2;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;
    
    // Function Calling.
    cout << "Your result is " << oneBitsInTwoNumbers(a, b) << endl;

    return (0);
}