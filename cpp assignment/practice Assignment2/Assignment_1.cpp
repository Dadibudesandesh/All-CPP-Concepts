// 1.	C++ Program to Calculate Sum of Natural Numbers
#include <iostream>
using namespace std;
int main()
{
    cout << "Name : sandesh dadibude"
         << "     "
         << "Roll NO : 104" << endl;
    int no1, no2;
    cout << "Enter two Natural numbers for calculate the sum : ";
    cin >> no1;
    cin >> no2;

    if (no1 >= 0 && no2 >= 0)
    {
        int sum = no1 + no2;
        cout << "Your sum is : " << sum;
    }
    else
    {
        cout << "Enter only natural numbers";
    }
}