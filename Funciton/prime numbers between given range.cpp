#include<iostream>
using namespace std;
int checkprime(int);
int main()
{
    int n1,n2;
    cout<<"\t\tENTER THE RANGE :";
    cout<<"\n\tLower Range : ";
    cin>>n1;
    cout<<"\n\tUpper Range : ";
    cin>>n2;

    //swapping if lower range and upper range are incorrectly entered
    if(n1>n2)
    {
        n2=n1+n2;
        n1=n2-n1;
        n2=n2-n1;
    }

    //checks if the numbers between the range is prime or not
    for(int i=n1;i<=n2;i++)
    {
        if(checkprime(i))
        {
          cout<<i<<"\t";
        }
        else continue;
    }
    return 0 ;

}

 int checkprime(int n)
 {
     //0 and 1 are not prime numbers
     int check;
     if(n==0 || n==1)
     {
         return 0;
     }
     //checks if 'n' is divisible by the each numbers below 'n'
     else if(n>1)
     {
         for(int j=2;j<n;j++)
         {
             if(n%j==0)
             {
                 return 0;
                 break;
             }

         }
     }
     //if 'n' is not divisible by any numbers then returns 1
     else return 1;
 }
