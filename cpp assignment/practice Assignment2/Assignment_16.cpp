#include<iostream>
using namespace std;
int main(){

    // 16.	Write a C++ program to draw following Pattern.
    // * * * *
    // * * *
    // * *
    // *
    int no;
    cout<<"Enter a number to print star pattern : ";
    cin>>no;
    for (int i = 1; i <=no; i++)
    {       
        for (int j = 1; j<=no-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

}