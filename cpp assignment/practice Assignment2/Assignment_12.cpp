#include<iostream>
using namespace std;
int fact(int no){
    if(no==0)
    {
        return 1;
    }else
    {
        return no*fact(no-1);
    }
}
int main()
{
    // 12.	C++ Program to Display Factors of a Number
    int no;
    cout<<"Enter a number for Display Factors of a Number : ";
    cin>>no;
    int ans=fact(no);
    cout<<"factorial is : "<<ans;
}