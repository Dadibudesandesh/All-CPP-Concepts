#include<iostream>
using namespace std;

// int add(int a, int b)
// {
//     return a+b;
// }

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}


int main()
{

    // int a,b;
    // cout<<"Enter any two number for addition : ";
    // cin>>a;
    // cin>>b;
    // cout<<add(a,b);

    int n;
    cout<<"Enter number to sum of given last number : ";
    cin>>n;
    cout<<sum(n);


}