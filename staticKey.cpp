// use of static keyword
// static keyword is a basiclly use to when function call multiple time and in function there are any variable are static then this variable value does not change in next when the function call.

#include<iostream>
using namespace std;

class staticKeyword{
    public:
        staticKeyword(){
            static int count=0;
            cout<<"\nCount is "<<count;
            count++;
        }

        

};
int main()
{
    for (int i = 0; i < 5; i++)
    {
        staticKeyword obj;
    }    
}