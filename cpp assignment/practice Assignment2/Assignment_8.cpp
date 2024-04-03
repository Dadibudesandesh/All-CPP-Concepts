#include<iostream>
using namespace std;

int main()
{
    // 8.	C++ Program to Check Whether a Number is Prime or Not

    int no;
    cout<<"Enter number for chacking number is prime or not : ";
    cin>>no;

    if(no%no==0)
    {
        cout<<"numer is prime";
    }

    return 0;
}