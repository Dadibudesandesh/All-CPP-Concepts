// Write a c ++ program to swap two numbers using call-by reference method.
#include <iostream>
using namespace std;

void swapNumbers(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Original numbers: " << num1 << " " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "Swapped numbers: " << num1 << " " << num2 << endl;

    return 0;
}
