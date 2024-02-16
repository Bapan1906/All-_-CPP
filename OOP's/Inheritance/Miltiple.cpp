#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;
    int height;

    void bark()
    {
        cout << "Barking..." << endl;
    }
};

class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid h1;
    h1.bark();
    h1.speak();
    cout << h1.age << endl;
    cout << h1.height << endl;
    cout << h1.color << endl;
    return 0;
}
