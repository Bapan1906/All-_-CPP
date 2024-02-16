#include <iostream>
using namespace std;

class Animal{
public:
    char level;
    // Default Constructor.
    Animal(){
        cout<<" Constructor called!"<<endl;
    }
};

int main()
{
    // Static Allocation
    Animal a1;
    a1.level = 'A';
    cout<<"Anumal level is"<<a1.level<<endl;

    // Dynamically Allocation.
    Animal *a = new Animal();
    (*a).level = 'B';
    cout<<"Animal level is"<<(*a).level<<endl;

    a->level;
    cout<<"Animal level is"<<a->level<<endl;


    return(0);
}