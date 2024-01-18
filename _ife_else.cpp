#include <iostream>
using namespace std;


int main() {

    int a, b, c, d;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter 3rd number: ";
    cin >> c;

    cout << "Enter 4th number: ";
    cin >> d;

    if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            cout << d << " is bigger";
            else
            cout << a << " is bigger";

        }
        else
        {
            if (c<d)
            cout << d << " is bigger";
            else
            cout << c << " is bigger";
        }
    }
}