// Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.
#include <iostream>
#include <cstring> 
using namespace std;

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    int* dynamicInt = new int;
    *dynamicInt = 10;

    char* dynamicChar = new char;
    *dynamicChar = 'A';

    char* dynamicString = new char[100]; 
    strcpy(dynamicString, "Hello, I am Sandesh");

    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated character: " << *dynamicChar << endl;
    cout << "Dynamically allocated string: " << dynamicString << endl;

    delete dynamicInt;
    delete dynamicChar;
    delete[] dynamicString;

    return 0;
}
