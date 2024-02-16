#include <iostream>
#include <cctype>
using namespace std;

bool checkPalindrome(string st)
{
    int s = 0;
    int e = st.length() - 1;

    while (s < e)
    {
        while (s < e && !isalnum(st[s])) // check alphanumeric string.
        {
            s++;
        }

        while (s < e && !isalnum(st[e]))
        {
            e--;
        }

        char startChar = tolower(st[s]); // convert upper case to lower case.
        char endChar = tolower(st[e]);

        if (startChar != endChar)
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the size of the string : " << endl;
    cin >> n;

    char st[n];
    cout << "Enter a Alphanumeric string : " << endl;
    cin >> st;

    cout << "Palindrome or not : " << checkPalindrome(st) << endl;

    return (0);
}