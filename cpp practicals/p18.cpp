// Write a C++ program to override the operators used in C++.
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator*(const Complex& other) const {
        double resultReal = real * other.real - imaginary * other.imaginary;
        double resultImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(resultReal, resultImaginary);
    }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imaginary << "i";
        return out;
    }
};

int main() {

    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    Complex c1(3.0, 4.0);
    Complex c2(2.0, -1.0);

    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    Complex diff = c1 - c2;
    cout << "Difference: " << diff << endl;

    Complex product = c1 * c2;
    cout << "Product: " << product << endl;

    return 0;
}
