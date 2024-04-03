#include <iostream>
#include <string>
using namespace std;

int fact(int no)
{

    if (no == 0)
    {
        return 1;
    }
    else
    {
        int result;
        result = no * fact(no - 1);
        return result;
    }
}
int main()
{
    // 2.	C++ Program to Find Factorial
    cout<<"Name : sandesh dadibude"<<"     "<<"Roll NO : 104"<<endl;
    int no;
    cout << "Enter a number for find factorial : ";
    cin >> no;
    cout << " Factorial is : " << fact(no);
}