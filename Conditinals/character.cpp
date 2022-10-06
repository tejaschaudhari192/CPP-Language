// Date

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter Character : ";
    cin >> c;
    if (c >= 'A' && c <= 'Z')
        cout << "It's Capital";
    else if (c >= 'a' && c <= 'z')
        cout << "It's Small";
    else if (c >= '0' && c <= '9')
        cout<<"It's Digit";
    else
        cout<<"Its special character";
        
    return 0;

    // coded by Tejas
}