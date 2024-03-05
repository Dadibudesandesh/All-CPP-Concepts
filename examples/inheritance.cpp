
// S I N G L E    I N H E R I T A N C E

// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//         vehicle(){
//             cout<<"tis is a vehicle class";
//         }
// };

// class car:public vehicle{
//     public:
//         car(){
//             cout<<"\nthis is a car class";
//         }
// };
// int main()
// {
//     car c;

//     return 0;
// }


// M U L I P L E    I N H E R I T A N C E


// #include <iostream>
// using namespace std;
// class vehicle{
//     public :
//         vehicle(){
//             cout<<"tis is a vehicle class";
//         }
// };

// class fourwheeler{
//     public:
//         fourwheeler(){
//             cout<<"this is a fourwheeler class";
//         }
// };


// class car:public vehicle,public fourwheeler{
//     public:
//         car(){
//             cout<<"this is a fourwheeler class";
//         }
// };
// int main()
// {
//     car c;
//     return 0;
// }


// M U L T I L E V E L   I N H E R I T A N C E

// #include <iostream>
// using namespace std;
// class vehicle{
//     public :
//         vehicle(){
//             cout<<"tis is a vehicle class";
//         }
// };

// class fourwheeler:public vehicle{
//     public:
//         fourwheeler(){
//             cout<<"this is a fourwheeler class";
//         }
// };


// class car:public fourwheeler{
//     public:
//         car(){
//             cout<<"this is a fourwheeler class";
//         }
// };
// int main()
// {
//     car c;
//     return 0;
// }


// H I E R A R C H I C A L   I N H E R I T A N C E

// #include<iostream>
// using namespace std;
// class vehicle{
//       public :
//         vehicle(){
//             cout<<"tis is a vehicle class";
//         }  
// };

// class car:public vehicle{
//         public:
//             car(){
//                 cout<<"car class";
//             }
// };

// class bus:public vehicle{
//     public:
//         bus()
//         {
//             cout<<"bus class";
//         }
// };

// int main()
// {
//     car c;
//     bus b;
// }

// H Y B R I D  I N H E R I T A N C E

// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//         vehicle()
//         {
//             cout<<"vehicle class";
//         }
// };

// class fare{
//     public:
//         fare(){
//             cout<<"fare class";
//         }
// };

// class car:public vehicle{
//     public:
//         car(){
//             cout<<"car class";
//         }
// };

// class bus:public vehicle,public fare{
//     public:
//         bus()
//         {
//             cout<<"bus class";
//         }
// };

// int main()
// {
//     bus b;
//     car c;
// }