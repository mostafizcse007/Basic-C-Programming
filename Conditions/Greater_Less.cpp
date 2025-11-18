#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    if (a == b)
        cout << "A and B are equal" << endl;
    else if (a > b)
        cout << "A is greater than B" << endl;
    else
        cout << "B is greater than A" << endl;
}