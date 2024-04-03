#include <iostream>
using namespace std;
// 6.	C++ Program to Convert Binary Number to Decimal and vice-versa
int binaryToDecimal(int binaryNo)
{
    int rev = 0, ld,no=binaryNo;
    while (no != 0)
    {
        ld = no % 10;
        rev *= 10;
        rev += ld;
        no /= 10;
        if (!(no == 1 || no == 0))
        {
             return 0;
        }
    }
    return no;
}

int main()
{
    int binaryNo;
    cout << "Enter any binary number for convert decimal number : ";
    cin >> binaryNo;
    int result = binaryToDecimal(binaryNo);
    if(result==0){
        cout<<"enter only binary number!!!";
    }
    else{
        cout<<"you enterd binary digits..";
    }
    cout<<result
    return 0;
}