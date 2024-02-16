#include <iostream>
using namespace std;

class Boy
{
private:
    int health;

public:
    char level;

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

    // Static Allocation.
    Boy b1;
    cout << "Size of b1 is " << sizeof(b1) << endl;
    cout << "Level is " << b1.level << endl; // Fixed the typo: "end" to "endl"
    cout << "Health is " << b1.getHealth() << endl;
    b1.setHealth(70); // using setter method.
    b1.level = 'A';
    cout << "Health is " << b1.getHealth() << endl;

    // Dynamically Allocation.
    Boy *b = new Boy;
    cout << "Level is " << (*b).level << endl;
    cout << "Helth is " << (*b).getHealth() << endl;

    // Alternative implementation
    cout << "Level is " << b->level << endl;
    cout << "Helth is " << b->getHealth() << endl;

    return 0;
}
