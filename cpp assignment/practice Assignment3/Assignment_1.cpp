#include<iostream>
using namespace std;
void primeNumber(int no1,int no2){
    for(int i=no1;i<=no2;i++){
        if(!(i%2==0))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    // 1.	C++ Program to Display Prime Numbers Between Two Intervals Using Functions
    int no1,no2;
    cout<<"Enter numbers for display prime number  : "<<endl;
    cout<<"Number 1 : ";
    cin>>no1;
    cout<<"Number 2 : ";
    cin>>no2;
    primeNumber(no1,no2);

    return 0;
}