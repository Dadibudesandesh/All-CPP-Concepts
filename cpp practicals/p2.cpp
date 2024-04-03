//Write a c ++ program to show the user of Arithmetic Operations & Relational operators.
#include <iostream>
using namespace std;

int main()
{
    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Arithmetic Operations:\n";
    cout << "Addition: " << a << " + " << b << " = " << a + b << endl;
    cout << "Subtraction: " << a << " - " << b << " = " << a - b << endl;
    cout << "Multiplication: " << a << " * " << b << " = " << a * b << endl;
    cout << "Division: " << a << " / " << b << " = " << a / b << endl;
    cout << "Modulus: " << a << " % " << b << " = " << a % b << endl;

    cout << "\nRelational Operators:\n";
    cout << a << " == " << b << " : " << (a == b ? "True" : "False") << endl;
    cout << a << " != " << b << " : " << (a != b ? "True" : "False") << endl;
    cout << a << " > " << b << " : " << (a > b ? "True" : "False") << endl;
    cout << a << " < " << b << " : " << (a < b ? "True" : "False") << endl;
    cout << a << " >= " << b << " : " << (a >= b ? "True" : "False") << endl;
    cout << a << " <= " << b << " : " << (a <= b ? "True" : "False") << endl;

    return 0;
}
