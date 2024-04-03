// Write a C++ Program to show access to Private Public and Protected using Inheritance.
#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base(int pri, int pro, int pub) : privateVar(pri), protectedVar(pro), publicVar(pub) {}

    void displayPrivate() {
        cout << "Private Variable in Base class: " << privateVar << endl;
    }

    void displayProtected() {
        cout << "Protected Variable in Base class: " << protectedVar << endl;
    }

    void displayPublic() {
        cout << "Public Variable in Base class: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    Derived(int pri, int pro, int pub) : Base(pri, pro, pub) {}

    void accessBaseMembers() {
        cout << "Public Variable in Derived class: " << publicVar << endl;

        cout << "Protected Variable in Derived class: " << protectedVar << endl;

        displayPublic();

        displayProtected();

    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    Derived obj(1, 2, 3);

    obj.accessBaseMembers();

    cout << "Accessing Base class members using Derived class object:" << endl;
    cout << "Public Variable: " << obj.publicVar << endl;

    return 0;
}
