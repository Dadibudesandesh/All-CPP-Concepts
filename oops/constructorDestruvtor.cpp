#include<iostream>
using namespace std;
class animals{
public:
    string name;    
    string color;

    animals(){                  // default constructor - no any arument passed
        name="tiger";
        color="yellow";
    }
    
    animals(string n , string c){       // parameterised constructor - argument passed
        name=n;
        color=c;
    }

    animals(animals& animal5){       // copy constructor - initialise object by aother existing object
        name=animal5.name;
        color=animal5.color;
    }

    ~animals(){                             // destuctor difined
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    animals *animal3 = new animals();
    cout<<animal3->name<<endl<<animal3->color<<endl;
    delete animal3;

    animals animal4("horse","black");
    cout<<animal4.name<<endl<<animal4.color<<endl;

    animals animal5=animal4;
    cout<<animal5.name<<endl<<animal5.color<<endl;

}