#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s; // creating stack.

    s.push("World"); // insert value in stack.
    s.push("hello");
    cout << "Before pop size of the stack : " << s.size() << endl;

    cout << "Top of the element : " << s.top() << endl; // printing top of the element.

    s.pop(); // pop element.
    cout << "after pop element : " << s.top() << endl;

    cout << "After pop size of the stack : " << s.size() << endl; //size of the stack.

    return (0);
}