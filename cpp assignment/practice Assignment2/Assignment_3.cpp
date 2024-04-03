#include <iostream>
using namespace std;

void mulTable(int no, int i)
{
    cout << "Enter number for generating multiple table : ";
    cin >> no;
    cout << "Your Table is : ";
    while (i <= 10)
    {
        cout << " " << no * i;
        i++;
    }
}
int main()
{
    // 3.	C++ Program to Generate Multiplication Table
    cout << "Name : sandesh dadibude"
         << "     "
         << "Roll NO : 104" << endl;
    int no, i = 1;
    mulTable(no, i);
}