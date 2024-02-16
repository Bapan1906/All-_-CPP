#include <iostream>
using namespace std;

char toLowerCase(char ch) // Function to check not case sensitive.
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }

    else
    {
        int temp = (ch - 'A') + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])

{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char a[20];
    cout << "Enter a string : " << endl;
    cin >> a;

    int len = getLength(a);

    cout << " palindrome or not : " << checkPalindrome(a, len) << endl;

    // cout << "case sensitive : " << toLowerCase('B') << endl;
    // cout << "case Sensitive : " << toLowerCase('b') << endl;

    return (0);
}