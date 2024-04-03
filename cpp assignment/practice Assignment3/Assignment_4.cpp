#include<iostream>
using namespace std;
int factRecur(int no){
    if(no==0)
    {
        return 1;
    }
    else{
        return no*factRecur(no-1);    }
}
int main()
{
    // 4.	C++ program to Calculate Factorial of a Number Using Recursion
    int no;
    cout<<"Enter a number for Calculate Factorial of a Number Using Recursion : ";
    cin>>no;
    int result = factRecur(no);
    cout<<"Factoria is : "<<result;
    return 0;
}