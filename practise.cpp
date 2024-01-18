// Take 10 numbers as input from the user and using nested-if tell which is the largest number among those.///


#include <iostream>
using namespace std;

int main() {

    int a, b, c, d, e, f, g, h, i, j, bigger;

    cout << "Enter 10 numbers:\n";
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

    if(a>b) {
        bigger = a;
    }
    else {
        bigger = b;
    }

    if(bigger<c) {
        bigger = c;
    }

    if(bigger<d) {
        bigger = d;
    }

    if(bigger<e) {
        bigger = e;
    }

    if(bigger<f) {
        bigger = f;
    }

    if(bigger<g) {
        bigger = g;
    }

    if(bigger<h) {
        bigger = h;
    }

    if(bigger<i) {
        bigger = i;
    }

    if(bigger<j) {
        bigger = j;
    }

    cout << bigger << " is the biggest number!";

}