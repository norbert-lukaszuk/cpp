#include <iostream>

using namespace std;
int count_months(int years);
int main()
{
    int age;
    cout << "Hello world!";
    cout << endl;
    cout << "How old are you?";
    cin >> age;
    int months = count_months(age);
    cout << "You are " << months << " months old";
    cout << endl;

    return 0;
}

int count_months(int years)
{
    int months;
    months = years * 12;

    return months;
}