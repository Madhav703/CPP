// Take 5 values from user that will be the marks of 5 subjects, calculate the overall percentage of 5 subjects and the average score.
// percentage = (number/base)*100

#include <iostream>
using namespace std;

int main()
{
    float subject[5], sum = 0, avg;
    int i;

    cout << "Enter marks of 5 subjects:\n";

    for(i = 0; i < 5; i++)
    {
        cin >> subject[i];
        sum += subject[i];
    }

    avg = sum / 5;

    cout << "Overall Percentage: " << (avg / 100) * 100 << "%" << endl;
    cout << "Average Score: " << avg << endl;

    return 0;
}