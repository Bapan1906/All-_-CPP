#include <iostream>
using namespace std;

class Boy
{
private:
    int health;

public:
    Boy()
    {
        cout << " Constructor called!" << endl;
    }

    char level;

    // Parameterized Constructor.
    Boy(int health)
    {
        // used this keyword.
        cout << " this " << this << endl;
        this->health = health;
    }

    // printing function.
    void print()
    {
        cout<<level<<endl;
    }

    // using getter and setter method.
    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    Boy b1(10);
    b1.getHealth();

    cout << " Address of b1 " << &b1 << endl;
    return 0;
}
