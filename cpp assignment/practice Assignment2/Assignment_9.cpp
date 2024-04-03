#include<iostream>
using namespace std;
int main(){
    // 9.	C++ Program to Display Prime Numbers Between Two Intervals
    int int1,int2;
    cout<<"Enter tow numbers to display Prime Numbers Between Two Intervals"<<endl;
    cout<<"Interval 1 : ";
    cin>>int1;
    cout<<"Interval 2 : ";
    cin>>int2;
    cout<<"prime number is :\n";
    for (int  i = int1; i <=int2; i++)
    {
        cout<<i<<" ";
    }
    
}