#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if (a >= 'a' && a <= 'z')
        cout << "This character is lowercase" << endl;
    else if (a >= 'A' && a <= 'Z')
        cout << "This character is uppercase" << endl;
    else if (a >= '0' && a <= '9')
        cout << "The number is numeric" << endl;
}