#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello!" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello, " << name << "!" << endl;
    }

    int sayHello(int n, char b)
    {
        cout << "Hello" << endl;
        return 1;
    }
};

int main()
{
    A obj1;
    obj1.sayHello();
    return 0;
}
