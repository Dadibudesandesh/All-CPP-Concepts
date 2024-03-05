#include<iostream>
using namespace std;
class animals{       //decleration of class name as animals
public:
    string name;    
    string color;
};

int main()
{
    animals animal1;            // create object name as animal1
    animal1.name="Dog";         // Initialise value to the class variable
    animal1.color="blak";
    cout<<animal1.name<<endl;   // access a data from animals class
    cout<<animal1.color<<endl;

    animals *animal2= new animals();  // create object using pointer variable
    animal2->name="cat";              // Initialize the value using pointer operator 
    animal2->color="white";
    cout<<animal2->name;
    cout<<animal2->color;

}