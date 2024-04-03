// Write a C++ program to read and print employee information using multiple inheritance.
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int age;

public:
    Employee(string n, int a) : name(n), age(a) {}

    void displayEmployeeInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Department {
protected:
    string department;

public:
    Department(string dep) : department(dep) {}

    void displayDepartmentInfo() {
        cout << "Department: " << department << endl;
    }
};

class Salary {
protected:
    double salary;

public:
    Salary(double sal) : salary(sal) {}

    void displaySalaryInfo() {
        cout << "Salary: $" << salary << endl;
    }
};

class EmployeeInfo : public Employee, public Department, public Salary {
public:
    EmployeeInfo(string n, int a, string dep, double sal)
        : Employee(n, a), Department(dep), Salary(sal) {}

    void displayCompleteInfo() {
        cout << "Employee Information:" << endl;
        displayEmployeeInfo();
        displayDepartmentInfo();
        displaySalaryInfo();
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    string name, department;
    int age;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter employee department: ";
    getline(cin, department);
    cout << "Enter employee salary: ";
    cin >> salary;

    EmployeeInfo emp(name, age, department, salary);

    emp.displayCompleteInfo();

    return 0;
}
