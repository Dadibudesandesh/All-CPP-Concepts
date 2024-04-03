// Write a C++ program to dynamically create an object of a class using the new operator.
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Object of MyClass created!" << endl;
    }

    ~MyClass() {
        cout << "Object of MyClass destroyed!" << endl;
    }

    void display() {
        cout << "Inside MyClass::display()" << endl;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    MyClass* objPtr = new MyClass();

    objPtr->display();

    delete objPtr;

    return 0;
}
