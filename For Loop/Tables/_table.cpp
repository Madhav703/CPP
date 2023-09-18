// Write a program to generate a table of a given number

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Write a number:\n";
    cin >> number;

    cout << "Table of " << number << ":" << "\n";

    for(int x = 1; x<=10; x++) {
        cout << number << "x" << x << "=" << number*x << "\n";
    }
}