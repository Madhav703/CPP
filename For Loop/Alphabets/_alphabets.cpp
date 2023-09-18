// Write a program that will ask the user to enter a character. Check if it is alphabetic or not. If alphabetic, check whether it is in upper case or lower case.

#include <iostream>
using namespace std;

int main() {
  char ch;

  cout << "Write a character!\n"; 
  cin >> ch;

  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    cout << ch << " is an alphabet!\n";
    
    if (ch >= 'a' && ch <= 'z') {
      cout << ch << " is in lowercase!\n";
    } 
    else {
      cout << ch << " is in uppercase!\n";
    }
  }
  else {
    cout << ch << " is not an alphabet!"; 
  }
  return 0;
}