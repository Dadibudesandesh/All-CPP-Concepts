#include <iostream>
using namespace std;
int main()
{
    int no, count = 0;
    cout << "Enter any Number to count digits : ";
    cin >> no;
    while (no != 0)
    {
        no /= 10;
        count++;
    }
    cout << "Given number under digit is : " << count;
    return 0;
}