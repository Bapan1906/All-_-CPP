#include <iostream>
using namespace std;

// create a class.
class hero
{
    // properties.
    public:
    int health;
    private:
    char level;

    void print(){
        cout<<level<<endl;
    }

};

int main()
{
    // Create an object.
    hero h1;
    h1.health;
    
    cout << "size :" << sizeof(h1) << endl;

    return (0);
}