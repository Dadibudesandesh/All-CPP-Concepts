// Write a c ++ program using class to find the greater one of two integer numbers using Inline function, conditional operator , and default argument.
#include <iostream>
using namespace std;

class Greater {
public:
    inline int findGreater(int num1, int num2) {
        return (num1 > num2) ? num1 : num2;
    }

    int findGreaterDefault(int num1, int num2 = 0) {
        return (num1 > num2) ? num1 : num2;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Greater obj;

    int greaterNum1 = obj.findGreater(num1, num2);
    cout << "Greater number using inline function: " << greaterNum1 << endl;

    int greaterNum2 = obj.findGreaterDefault(num1, num2);
    cout << "Greater number using default argument: " << greaterNum2 << endl;

    return 0;
}
