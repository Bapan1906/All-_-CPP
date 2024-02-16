#include <iostream>
using namespace std;

// Function to reverse a string using recursion
void reverseStr(string &str, int i, int j)
{
    cout<<endl;
    cout << "Call recursive for : " << str << endl;
    // Base case.
    if (i >= j)
    {
        return;
    }

    // Swap characters at positions i and j
    swap(str[i], str[j]);

    // Recursive Case.
    reverseStr(str, i + 1, j - 1);
}

int main()
{
    string name = "ABCDEF";
    reverseStr(name, 0, name.length() - 1);
    cout<<endl;
    cout <<"Your Reverse String is : " << name << endl;

    return 0;
}
