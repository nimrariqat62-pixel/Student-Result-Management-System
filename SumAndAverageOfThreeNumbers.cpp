#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Enter 3rd number: ";
    cin >> num3;

    cout << "Sum: " << num1 + num2 + num3 << endl;
    cout << "Average: " << (num1 + num2 + num3) / 3.0 << endl;

    return 0;
}