// Write a c ++ program to Generate Multiplication table by taking user input.
#include <iostream>
using namespace std;

int main()
{

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;
    int number;

    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;

    cout << "Multiplication table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i)
    {
        cout << number << " * " << i << " = " << (number * i) << endl;
    }

    return 0;
}
