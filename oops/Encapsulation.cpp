#include<iostream>
using namespace std;

// Encapsulation is a binding method or functions together into a single unit means a class
// Also leads Data Abstraction [hinding] .
// Class is kwon as a abstract data type[ADT]

class encapsulation{

        int x;
        public:
            void set(int n){
                x=n;
            }
            int get()
            {
                return x;
            }
};

int main()
{
      encapsulation obj;
    //   obj.x; // it is a not a accessible because it is a private
      obj.set(4); // you can use these variable then you want to write a function to manupulate data
     cout<<obj.get();

}