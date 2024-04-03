// Wine a C program to demonstrate the use of Friend Keyword Write a C++ program to demonstrate the use of Static Keyword.
#include <iostream>
using namespace std;

class B; 

class A {
private:
    int valueA;

public:
    A() : valueA(5) {}

    friend void showValue(A objA, B objB);
};

class B {
private:
    int valueB;

public:
    B() : valueB(10) {}

    friend void showValue(A objA, B objB);
};

void showValue(A objA, B objB) {
    cout << "Value of A: " << objA.valueA << endl;
    cout << "Value of B: " << objB.valueB << endl;
}

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    A objA;
    B objB;

    showValue(objA, objB);

    return 0;
}
