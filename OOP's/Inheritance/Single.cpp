#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;
    int height;

    void speak()
    {
        cout << "Speaking..." << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog d1;
    d1.speak();
    d1.age = 3; // Accessing and setting age directly (public member)
    cout << d1.age << endl;
    cout << d1.height << endl;
    cout << d1.weight << endl;
    return 0;
}
