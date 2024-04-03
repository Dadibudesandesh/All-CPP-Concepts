#include <iostream>
using namespace std;
int main()
{
    // 5.	C++ Program to Reverse a Number
    cout << "Name : sandesh dadibude"
         << "     "
         << "Roll NO : 104" << endl;

    int no,ld,rev=0;
    cout<<"Enter any number for reverse : ";
    cin>>no;
    while (no!=0)
    {
        ld=no%10;
        rev*=10;
        rev+=ld;
        no/=10;
    }

    cout<<rev;

}