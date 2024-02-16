#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Inside the function 1..." << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside the function 2..." << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside the function 3..." << endl;
    }
};

int main()
{
    A o1;
    o1.func1();

    B o2;
    o2.func1();
    o2.func2();

    C o3;
    o3.func1();
    o3.func3();

    return 0;
}
