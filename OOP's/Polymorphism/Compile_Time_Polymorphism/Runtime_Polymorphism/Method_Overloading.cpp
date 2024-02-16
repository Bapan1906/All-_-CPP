#include <iostream>
using namespace std;

class Animal
{
public:
    void Speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void Speak()
    {
        cout << "Breaking" << endl;
    }
};

int main()
{
    Dog d1;
    d1.Speak();
    return (0);
}