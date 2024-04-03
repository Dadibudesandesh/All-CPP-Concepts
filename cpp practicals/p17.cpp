// Write a C++ program to demonstrate the use of this Keyword.
#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int value) {
        this->value = value;
    }

    void displayValue() {
        cout << "Value: " << this->value << endl;
    }

    bool isEqual(MyClass &other) {
        return this->value == other.value;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    MyClass obj1(5);
    MyClass obj2(10);
    MyClass obj3(5);

    obj1.displayValue();
    obj2.displayValue();
    obj3.displayValue();

    cout << "Is obj1 equal to obj2? " << (obj1.isEqual(obj2) ? "Yes" : "No") << endl;
    cout << "Is obj1 equal to obj3? " << (obj1.isEqual(obj3) ? "Yes" : "No") << endl;

    return 0;
}
