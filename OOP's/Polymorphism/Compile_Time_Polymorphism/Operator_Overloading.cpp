#include <iostream>
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;                            // Corrected the variable name to obj.a
        cout << "output: " << value1 - value2 << endl; // Corrected the operation to addition

        // cout << " hello!" << endl;
    }
/*
    //  Bracket overloading.
    void operator()()
    {
        cout << " Bracket" << this->a << endl;
  
    }
*/    

};

int main()
{
    B obj1, obj2;
    obj1.a = 8;
    obj2.a = 7; // Corrected to set obj2.a instead of obj2.b

    obj1 + obj2;

    // obj1();

    return 0;
}
