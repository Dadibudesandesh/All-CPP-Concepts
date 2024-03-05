#include<iostream>
using namespace std;
// class privateData{
//     int x;
//     public:
//         privateData(int no){
//             x=no;
//         }

//         friend void printPrivateData(privateData &data);
// };

// void printPrivateData(privateData &data){
//     cout<<data.x<<endl;
// }

// int main(){
//     privateData data(10);
//     printPrivateData(data);
// }

class privateData{
    int a=10;
    friend void printData(privateData obj);
};

void printData(privateData obj){
    cout<<obj.a;
}

int main()
{
    privateData obj;
    printData(obj);
}

