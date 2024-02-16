#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q; // creating.

    q.push("hello"); // insert element.
    q.push("world");

    cout << "Before pop Size of queue : " << q.size() << endl; // size of the queue.

    cout << "First elemen : " << q.front() << endl;

    q.pop(); // pop element.

    cout << "first element : " << q.front() << endl;

    cout << "After pop size of queue : " << q.size() << endl;

    return (0);
}