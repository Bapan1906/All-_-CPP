#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Calling class A function..." << endl;
    }
};

class D
{
public:
    void func4()
    {
        cout << "Calling class D function..." << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Calling class B function..." << endl;
    }
};

class C : public A, public D
{
public:
    void func3()
    {
        cout << "Calling class C function..." << endl;
    }
};

int main()
{
    C obj1;
    obj1.func1(); // Accessing func1 from class A
    obj1.func3(); // Accessing func3 from class C
    obj1.func4(); // Accessing func4 from class D
    return 0;
}
