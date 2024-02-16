#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value oh n :- ";
    cin >> n;
    int count = 1;
    int i;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return (0);
}