#include<iostream>
using namespace std;
int main(){

        // 15.	Write a C++ program to draw following Pattern.
        // * 
        // * * 
        // * * * 
        // * * * * 
        // * * * * *  

    int no;
    cout<<"Enter a number to print star pattern horizontal flip : ";
    cin>>no;
    for (int i = 1; i <=no; i++)
    {       
        for (int j = 1; j<=i; j++)  //you can print multiple type patters using j<= i/no/no-i+1 .ect conditions 
        {
            
            cout<<"*";
        }
        cout<<endl;
        
    }
    

}