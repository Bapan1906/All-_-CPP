#include <iostream>
using namespace std;

int getLength(char name[])

{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseStr(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main()
{
    char name[20];
    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "your name is : " << name << endl;
    int len = getLength(name);
    cout << "length of the string is : " << len << endl;

    reverseStr(name, len);
    cout << "Reverse string is : "<<name<<endl;

    return (0);
}