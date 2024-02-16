#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source " << src << " "
         << "Destinamtion " << dest << endl;

    // Base case.
    if (src == dest)
    {
        cout << " REACH - HOME... " << endl;
        return;
    }

    // Processing.
    src++;

    // Recursive Call.
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    cout << endl;

    reachHome(src, dest);

    return (0);
}