#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d; // create.

    d.push_back(1); // Insert Element.
    d.push_front(2);
    d.push_back(3);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_front(); // pop front.
    // cout << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << "Print First Index Element : " << d.at(1) << endl;

    cout << "Front Element : " << d.front() << endl;
    cout << "Back Element : " << d.back() << endl;

    cout << "Empty or Not : " << d.empty() << endl;

    cout<<"Before erase : "<<d.size()<<endl;

    d.erase(d.begin(), d.begin()+1);

    cout<<"After erase : "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;



    return (0);
}