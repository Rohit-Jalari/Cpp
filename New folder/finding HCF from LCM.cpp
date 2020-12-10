#include<iostream>
using namespace std;
int main()
{
   int n1,n2,max_n,LCM,HCF;
   cout<<"Enter the first number : ";
   cin>>n1;
   cout<<"Enter the second number : ";
   cin>>n2;
   max_n=n1>n2?n1:n2;

   for(int i=1;i<=max_n;i++)
   {
       if(n1%i==0 && n2%i==0)
       {
           LCM=i;
       }
   }

   HCF=(n1*n2)/LCM;
   cout<<"The LCM of "<<n1<<" & "<<n2<<" is "<<LCM;
   cout<<"\nThe HCF of "<<n1<<" & "<<n2<<" is "<<HCF;
}
