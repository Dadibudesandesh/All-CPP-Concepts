// Write   a c ++ program to input a number . If the number is even, print its square otherwise print its cube.
#include <iostream>
using namespace std;

int main()
{
    cout<<"Name : Sandesh Babasaheb Dadibude"<<endl;
    cout<<"Roll No : 104"<<endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Square of " << number << " is: " << number * number << endl;
    }
    else
    {
        cout << "Cube of " << number << " is: " << number * number * number << endl;
    }
    return 0;
}

