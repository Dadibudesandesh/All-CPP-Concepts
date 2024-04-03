#include<iostream>
using namespace std;
int main()
{
    // 7.	C++ Program to Check Whether a Number is Palindrome or Not
    int no,rev=0;
    cout<<"Enter any more than two digit number to check given number is palindrom or not : ";
    cin>>no;
    while(no!=0)
    {
        int ld=no%10;
        rev*=10;
        rev+=ld;
        no/=10;
    }
    cout<<rev;
    
    (no==rev)?cout<<"Given number is palindrome":cout<<"Given number is not a palindrome";

    // if(no==rev)
    // {
    //     cout<<"Given number is palindrome";
    // }
    // else{

    //     cout<<"Given number is not a palindrome";
    // }
return 0;
}