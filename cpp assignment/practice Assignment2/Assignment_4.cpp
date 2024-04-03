#include <iostream>
using namespace std;

void fibonacci(int no, int i)
{
    int temp = 0;
    cout << "fibonacci is : ";
    while (i <= no)
    {
        cout << " " << (temp = temp + i);
        i++;
    }
}
int main()
{
    // 4.	C++ Program to Display Fibonacci Series
    cout << "Name : sandesh dadibude"
         << "     "
         << "Roll NO : 104" << endl;

    int no, i = 1;
    cout << "Enter Number To Display Fibonacci Series : ";
    cin >> no;
    fibonacci(no, i);
}