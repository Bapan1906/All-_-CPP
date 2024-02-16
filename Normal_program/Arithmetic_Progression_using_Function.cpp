#include <iostream>
using namespace std;
int arithmatic(int num)
{
    int ans = (3 * num + 7);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout <<"Your result is - "<< arithmatic(n) << endl;
    return (0);
}