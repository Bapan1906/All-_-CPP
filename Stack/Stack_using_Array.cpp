#include <iostream>
using namespace std;

class Mystack
{
    int *ptr; // pointer to point the array.
    int max_capacity;
    int arr_size;

public:
    Mystack(int g) // constructor
    {
        ptr = new int[g]; // initialize an array.
        max_capacity = g;
        arr_size = 0;
    }

    // Push Operation.

    void push(int g)
    {
        if (arr_size == max_capacity)
        {
            cout << "Can not Push ! stack capacity is full. " << endl;
            return;
        }

        ptr[arr_size] = g;
        cout << "Element " << g << " Pushed in stack !. " << endl;
        arr_size++;
    }

    // Pop Operation.

    void pop()
    {
        if (arr_size == 0)
        {
            cout << " Can not Pop ! Stack is Empty ! " << endl;
        }

        cout << " element popped ! " << endl;
        arr_size--;
    }

    // Top operation.

    int top()
    {
        if (arr_size == 0)
        {
            cout << "Can not give the top element ! stack is empty !" << endl;
            return -1;
        }
        cout << " Top of the stack element is " << ptr[arr_size - 1] << endl;
        return ptr[arr_size - 1];
    }

    // size of the stack.

    int size()
    {
        return arr_size;
    }

    // check empty or not.

    int empty()
    {
        if (arr_size == 0)
        {
            cout << "Stack is empty !" << endl;
            return 1;
        }

        cout << "Stack is not empty !" << endl;
        return 0;
    }
};

int main()
{

    Mystack s1(7); // object for Mystack class.

    s1.empty();
    s1.push(9);
    s1.push(7);
    s1.pop();
    s1.empty();
    s1.top();
    s1.size();

    return (0);
}