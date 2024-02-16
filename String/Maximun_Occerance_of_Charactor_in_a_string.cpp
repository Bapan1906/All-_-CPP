#include <iostream>
using namespace std;

char getMaxOcceranceOfChar(string s)
{
    int arr[26] = {0}; // Creating an array.

    // create an array of count of characrer.
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // For LowerCase.
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = (ch - 'a');
        }

        // For Uppercase.
        else
        {
            number = (ch - 'A');
        }

        arr[number]++;
    }

    // Find maximum number of character.
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    cin >> s;

    cout << getMaxOcceranceOfChar(s) << endl;

    return (0);
}