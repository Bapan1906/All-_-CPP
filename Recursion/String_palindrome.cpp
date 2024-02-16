#include <iostream>
using namespace std;

// Function to check if a string is a palindrome using recursion
bool checkPalindrome(string &str, int i, int j)
 {
    // Base Case: If i is greater than j, all characters have been checked, and it's a palindrome.
    if (i >= j) 
    {
        return true;
    }
    
    // If characters at positions i and j don't match, it's not a palindrome.
    if (str[i] != str[j]) 
    {
        return false;
    } 
    else
    {
        // Recursively call checkPalindrome for the remaining substring.
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main() 
{
    string str = "abbcca";
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome) 
    {
        cout << "String is a palindrome: " << str << endl;
    } 
    else 
    {
        cout << "String is not a palindrome: " << str << endl;
    }

    return 0;
}
