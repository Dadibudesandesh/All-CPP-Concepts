#include<iostream>
using namespace std;

                       // I N H E R I T A N C E
// types of inheritance 

        //single level inheritance
        // multilevel inhetitance
        // multiple inheritance 
        // hirarchical inheritance
        // hybrid inheritance
        // dimond inheritance

// simple inheritance concept               // here are public,protected and private it is a inheritance methods

            // class inheritance{
            //    public:
            //        int x;
            //     protected:
            //         int y;
            //     private:
            //         int z;
            // };

            // class chiled1:public inheritance{
            //     // x will remain public
            //     // y will remain protected
            //     // z will not be accessible
            // };

            // class chiled2:protected inheritance{
            //     // x will be protected
            //     // y will be protected
            //     // z will not be accessible
                
            // };

            // class chiled2:private inheritance{
            //     // x will be private
            //     // y will be private
            //     // z will not be accessible
                
            // };

// Example of single level  inheritance


            // class perent{
            //     public: 
            //         perent(){
            //             cout<<"perent class"<<endl;
            //         }
            // };

            // class chiled:public perent{
            //     public :
            //     chiled(){
            //         cout<<"chiled class"<<endl;
            //     }
            // };

// // Example of multilevel inheritance

            // class grandchiled:public chiled{
            //     public:
            //      grandchiled(){
            //         cout<<"grandchiled"<<endl;
            //      }
            // };

// Example of multiple inheritance

            // class perent1{
            //     public:
            //         perent1()
            //         {
            //             cout<<"perent class"<<endl;
            //         }
            // };

            // class perent2{
            //     public:
            //         perent2(){
            //             cout<<"perent2 class"<<endl;
            //         }
            // };

            // class chiled:public perent1, public perent2{
            //     public:
            //     chiled()
            //     {
            //         cout<<"chiled class";
            //     }
            // };


// Hirerarchical inheritance

            // class perent{
            //     public:
            //         perent(){
            //             cout<<"perent class"<<endl;
            //         }
            // };

            // class chiled1:public perent
            // {
            //     public:
            //        chiled1(){
            //         cout<<"chiled1 class"<<endl;
            //        }
            // };

            // class chiled2:public perent{
            //     public:
            //     chiled2(){
            //         cout<<"chiled2 class";
            //     }
            // };

// hybrid inheritance       //  combination of more than 1 inheritance type

            // class perent{
            //     public:
            //         perent(){
            //             cout<<"perent class\n";
            //         }
            // };
            // class chiled1:public perent{
            //     public:
            //         chiled1(){
            //             cout<<"chiled1 class\n";
            //         }
            // };

            // class chiled2:public perent{
            //         public:
            //         chiled2(){
            //             cout<<"chiled2 class\n";
            //         }
            // };

            // class grandChiled:public chiled2{
            //         public:
            //          grandChiled(){
            //             cout<<"grandChiled\n";
            //          }
            // };



// dimond inheritance

            //    class perent{
            //     public:
            //         perent(){
            //             cout<<"perent class"<<endl;
            //         }
            //    };

            //    class chiled1:public perent{
            //     public:
            //     chiled1(){
            //         cout<<"chiled 1 class"<<endl;
            //     }
            //    };

            //    class chiled2:public perent{
            //     public:
            //         chiled2()
            //         {
            //             cout<<"chiled2 class"<<endl;
            //         }
            //    };

            //    class grandchiled:public chiled1,public chiled2{
            //     public:
            //         grandchiled(){
            //             cout<<"grandchile class"<<endl;
            //         }
            //    };





int main()
{
    // chiled c;      //for single inheritance

    // grandchiled c; // for multilevel inheritance

    // chiled c;     // for multiple inheritance

    // chiled1 cl;    // for hirerachical inheritance
    // chiled2 c;

    // grandChiled c;     //for hybrid inheritance

    // grandChiled gc;      // for dimand inheritance

}