#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :- ";
    cin >> n;
    int row = 1;
   
    while (row <= n)
    {
        int col = 1;
        
        while (col <= (n - row + 1))
        {
            cout << col << " ";  
            col++;
        }

        int star =row+1; 
        while (star)
        {
            cout<<"*"<<" ";
            star--;
        }

        int sec = n-row+1;
        while (sec)
        {
            cout<<sec<<" ";
            sec--;
        }
           
        cout << endl;
        row++;
    }

    return (0);
}
