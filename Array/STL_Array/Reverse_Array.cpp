#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v) // Reverse function.
{
    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[e], v[s]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v) // Printing function.
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}

int main()
{
    vector<int> v; // vector creating.

    v.push_back(11);
    v.push_back(16);
    v.push_back(15);
    v.push_back(14);
    v.push_back(13);
    v.push_back(12);

    vector<int> ans = reverse(v); // Reverse function calling.
    
    cout<<"Printing Reverse Array. "<<endl;
    print(ans);                   // Printing function calling.

    return (0);
}