#include <iostream>
using namespace std;

class Hero
{
    // properties

private:
    int health;

public:
    char level;

    // Default Constructor.
    Hero()
    {
        cout << "Simple constructor called " << endl;
    }

    // Copy Constructor.
    Hero(Hero &temp) // we used '&' for call by reference.
    {
        cout << "Called copy Constructor !" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Parametrised Constructor.
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Printing function.
    void print()
    {
        cout << "Health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    // Getter Method.
    int getHealth()
    {
        return health;
    }

    // Setter Method.
    int setHealth(char ch)
    {
        level = ch;
    }
};

int main()
{

    // Static Allocation
    Hero S(10, 'c');

    // Create a another object and copy . (Call Copy Constructor.   )
    Hero R(S);
    // R.health = S.health;
    // R.level = S.level;

    R.print();

    return (0);
}