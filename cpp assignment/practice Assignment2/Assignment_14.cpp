#include<iostream>
using namespace std;

int main(){

    // 14.	Write a C++ program to draw following Pattern.
    // * * * * * * * * *
    // *              *
    //   *          *
    //     *      *
    //        *

//     int no=5;
//     for(int i=1;i<=no;i++)
//     {
//         for (int j =1; j<=no; j++)
//         {
//             if (i==1 || i==no || j==1 || j==no)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

    int no=5;
    int mid=(no/2)+1;
    for(int i=1;i<=no;i++)
    {
        
        for (int j =1; j<=no; j++)
        {
            if (j==mid)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
       
        cout<<endl;
        
    }

    return 0;
}