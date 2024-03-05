#include <iostream>
using namespace std;
int main()
{
    // const float pi=3.14 ;
    // int r,result;
    // cout<<"enter radius : ";
    // cin>>r;
    // result=pi*r*r;
    // cout<<"Before typecasting : "<<result<<endl;
    // float r2=float(r);
    // cout<<"After typecasting : "<<pi*r2*r2<<endl;

    //ASCCI values (string to value)

    // char value;
    // cout<<" Enter any character to find ASCCI value : ";
    // cin>>value;
    // int value2=int(value);
    // cout<<value2<<endl;
    // cout<<int(value)<<endl;

    //ASCCI values (value to string)

    // int val;
    // cout<<"Enter ASCCI values to find characters : ";
    // cin>>val;
    // // char val2=char(val);
    // // cout<<val2;
    // cout<<char(val);

    for (int i = 65; i<91/*char(i)=='Z'*/; i++)
    {
        cout<<char(i)<<" : "<<i<<endl;
    }
    

    return 0;
}