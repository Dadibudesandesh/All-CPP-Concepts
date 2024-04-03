// Write a C++ Program to demonstrate Run time polymorphism.
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows." << endl;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->speak(); 
    animal2->speak(); 

    delete animal1;
    delete animal2;

    return 0;
}
