// Write a C++ Program to Maintain Employee Database using Virtual class.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}

    virtual void displayInfo() {
        cout << "ID: " << id << ", Name: " << name;
    }
};

class RegularEmployee : public Employee {
protected:
    double salary;

public:
    RegularEmployee(string n, int i, double s) : Employee(n, i), salary(s) {}

    void displayInfo() override {
        Employee::displayInfo(); 
        cout << ", Salary: $" << salary << endl;
    }
};

class ContractEmployee : public Employee {
protected:
    string contractDuration;

public:
    ContractEmployee(string n, int i, string cd) : Employee(n, i), contractDuration(cd) {}

    void displayInfo() override {
        Employee::displayInfo(); 
        cout << ", Contract Duration: " << contractDuration << " months" << endl;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    vector<Employee*> employees;

    employees.push_back(new RegularEmployee("Rushabh Yadav", 103, 5000.0));
    employees.push_back(new RegularEmployee("Sandesh Dadibude", 104, 6000.0));

    employees.push_back(new ContractEmployee("Mahesh Suryavanshi", 2001, "6"));
    employees.push_back(new ContractEmployee("Prathmesh Sawant", 2002, "3"));

    cout << "Employee Database:" << endl;
    for (Employee* emp : employees) {
        emp->displayInfo();
    }

    for (Employee* emp : employees) {
        delete emp;
    }

    return 0;
}
