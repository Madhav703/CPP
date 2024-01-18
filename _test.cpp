#include <iostream>
using namespace std;

int main()

{
    int a, b, c, d, bigger;

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
        bigger = a;
    }
    else {
        bigger = b;
    }

    if (bigger < d)
    {
        bigger = d;
    }
    else
    {
        bigger = c;
    }

    cout << bigger << " is the largest number!";
}
