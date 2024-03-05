#include <iostream>
using namespace std;

// ability of objects or methods to takes different forms

// types of polymorhism

    // compiletime polymorphism

            // function overloading
                    // class add{
                    //     public:
                    //         void sum(int a, int b){
                    //             int sum=a+b;
                    //             cout<<sum<<endl;
                    //         }
                    //         void sum(int a,int b, int c)
                    //         {
                    //             int sum=a+b+c;
                    //             cout<<sum;
                    //         }
                    // };

            // operator overloading
            
                    // class complex
                    // {
                    // public:
                    //     int real;
                    //     int imgagenary;
                    //     complex(int a, int b)
                    //     {
                    //         real = a;
                    //         imgagenary = b;
                    //     }
                    //     complex operator+ (complex &c)
                    //     {
                    //         complex ans(0,0);
                    //         ans.real = real + c.real;
                    //         ans.imgagenary = imgagenary + c.imgagenary;
                    //         return ans;
                    //     }
                    // };

    // runtime polymorphysm

                        class perent{
                            public:
                                virtual void print(){
                                    cout<<"perent class"<<endl;
                                }

                                void show(){
                                    cout<<"perent class"<<endl;
                                }
                        };

                        class chiled:public perent{
                            public :
                            void print(){
                                cout<<"chield class"<<endl;
                            }

                            void show(){
                                cout<<"chield class"<<endl;
                            }
                        };

    int main()
    {
        // add sum;
        // sum.sum(2,3);
        // sum.sum(2,3,4);

        // complex c1(1, 5);
        // complex c2(1, 6);

        // complex  c3 = c1+ c2;
        // cout<<c3.real<<" i"<<c3.imgagenary;

        perent *p;
        chiled c;
        p = &c;
        p->print();
        p->show();




        return 0;
    }