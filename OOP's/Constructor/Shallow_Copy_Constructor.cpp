#include <iostream>
#include <cstring> // Include the header for the strcpy function
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    // Default Constructor.
    Hero()
    {
        cout << "Simple constructor called " << endl;
        name = new char[100];
    }

    // Copy Constructor.
    Hero(const Hero &temp) // Use const reference in the copy constructor.
    {
        cout << "Called copy Constructor !" << endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = new char[100];    // Allocate memory for the name.
        strcpy(this->name, temp.name); // Copy the name.
    }

    // Parametrized Constructor.
    Hero(int health)
    {
        this->health = health;
        name = new char[100];
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        name = new char[100];
    }

    // Destructor to free the allocated memory.
    ~Hero()
    {
        delete[] name;
    }

    // Printing function.
    void print()
    {
        cout << "Health " << this->health << endl;
        cout << "level " << this->level << endl;
        cout << "Name " << this->name << endl;
    }

    // Getter Method.
    int getHealth()
    {
        return health;
    }

    // Setter Method.
    void setHealth(int h) // Change return type to void
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(const char newName[]) // Use const char* for parameter
    {
        strcpy(this->name, newName);
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(10);
    hero1.setLevel('a');
    const char name[] = "Bapan";
    hero1.setName(name);

    return 0;
}
