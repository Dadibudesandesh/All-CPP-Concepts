// Write a program in c ++ to read any day number in integer and display day name in the word.
#include <iostream>
using namespace std;

int main()
{
    cout << "Name : Sandesh Babasaheb Dadibude" << endl;
    cout << "Roll No : 104" << endl;

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int dayNumber;

    cout << "Enter a day number (1 for Sunday, 2 for Monday, ..., 7 for Saturday): ";
    cin >> dayNumber;

    if (dayNumber >= 1 && dayNumber <= 7)
    {
        cout << "Day name: " << days[dayNumber - 1] << endl;
    }
    else
    {
        cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}
