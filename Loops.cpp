#include<iostream>
using namespace std;

int main()
{

// For Loop

            // for (int i = 0; i < 5; i++)
            // {
            //     cout<<"Nmaste From Bharat"<<endl;
            // }

        // que : print the 1 to 10 numbers

            // for (int i = 1; i <=10; i++)
            // {
            //     cout<<i<<" ";
            // }
     
        // que : print all the even numbers from 10 to 40 

            // for (int i = 10; i <=50; i++)
            // {
            //     if(i%2==0) cout<<i<<" ";
            // }

        // que : print table of 20
 
            // for (int i = 1; i <=10; i++)
            // {
            //      cout<<i*20<<" ";
            // }


        //  que : display AP(Arithmatic progration) : 1,3,5,7,9.... upto 'n' terms 
            // int n;
            // cout<<"Enter number for display AP : 1,3,5,7,9.... upto 'n' terms ";
            // cin>>n;
            // for (int i = 1; i <=2*n-1; i+=1)
            // {
            //      cout<<i<<" ";
            // }


        // que : dispay (geomatric progration) GP : 1,2,4,8,16,32...upto 'n' terms

            // int n,a=1;
            // cout<<"Enter number for dispay (geomatric progration) GP : ";
            // cin>>n;
            // for (int i = 1; i <=n; i++)
            // {
            //     cout<<a<<" ";
            //     a*=2;
            // }

        // que : write a program to find a highest factor of a number 'n' (other than 'n' it self)
           
            //method 1  // int n,f;
                        // cout<<"Enter number for find a highest factor : ";
                        // cin>>n;
                        // for (int i = 1; i <=n/2; i++)
                        // {
                        //     if(n%i==0) f=i;
                        // }
                        //     cout<<f;
            
        
            //method 2  // int n,f;
                        // cout<<"Enter number for find a highest factor : ";
                        // cin>>n;
                        // for (int i = n/2; i>=1; i--)
                        // {
                        //     cout<<i;
                        //     break;
                        // }


// While loop  


             // que : count digits

                //   int no,count=0;
                //   cout<<"Enter any Number to count digits : ";
                //   cin>>no;
                //   while (no!=0)
                //   {
                //     no/=10;
                //     count++;
                //   }
                //   cout<<"Given number under digit is : "<<count;
                  

             // que : count digits and sum of them

                //   int no,sum=0;
                //   cout<<"Enter any Number to count digits : ";
                //   cin>>no;
                //   while (no!=0)
                //   {
                //     int ld=no%10;
                //     no/=10;
                //     sum+=ld;                    
                //   }
                //   cout<<"Given number under digit sum is : "<<sum;



             // que : WAP to print product of digits of a given number

                //   int no,sum=1;
                //   cout<<"Enter any Number calculate product : ";
                //   cin>>no;
                //   while (no!=0)
                //   {
                //     int ld=no%10;
                //     no/=10;
                //     sum*=ld;                    
                //   }
                //   cout<<"Given number product is : "<<sum;



             // que : WAP to print reverse a given number

                //   int no,r=0;
                //   cout<<"Enter any Number for reverse the number : ";
                //   cin>>no;
                //   while (no!=0)
                //   {
                //     int ld=no%10;  //ld means = last digit
                //     r*=10;    
                //     r+=ld;                
                //     no/=10;
                //   }
                //   cout<<"Reverse number is : "<<r;




             // que : WAP to print sum of 1 to 'n' numbers

                //   int no,sum=0;
                //   cout<<"Enter any Number calculate sum of from 1 to given number  : ";
                //   cin>>no;
                //   sum=no*(no+1)/2;
                //   cout<<"Reverse number is : "<<sum;


             // que : WAP to print factorial  of given numbers

                //   int no,fact=1,i=1;
                //   cout<<"Enter any Number calculate factorial given number  : ";
                //   cin>>no;
                //   while (i<= no)
                //   {
                //     fact*=i;
                //    i++;
                //   } 
                //   cout<<"Factorial is : "<<fact;

             
                //   int no,fact=1,i=1;
                //   cout<<"Enter any Number calculate factorial given number  : ";
                //   cin>>no;
                //   while (i <= no)
                //   {
                //     fact*=i;
                //     i++;
                //     cout<<i<<"! : "<<fact<<endl;
                //   }


                // que : WAP to print ALL ASCII values and characters 

                //   int no=65;
                //   while (no <=90)
                //   {
                //     cout<<no <<" : "<<char(no)<<endl;
                //     no++;
                //   }


    // Do while loop

                // int no,i=1;
                // cout<<"Enter any number for table : ";
                // cin>>no;
                // do{
                //     cout<<no*i;
                //     i++;
                // }while(i<=10);

                



    return 0;
}