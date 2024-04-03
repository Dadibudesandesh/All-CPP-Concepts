// Write a c ++ program to implement a class called student that has variables for name, class, roll number, and makers . Include member functions to calculate the grade based on the marks and display the students information.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    Student(string n, string cls, int roll, float m) {
        name = n;
        studentClass = cls;
        rollNumber = roll;
        marks = m;
    }
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;
    Student student1("Sandesh Dadibude", "BCA II", 104, 85.5);
    cout << "Student Information:" << endl;
    student1.displayInfo();
 
}
