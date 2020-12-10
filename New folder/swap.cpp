#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter first number :";
   cin>>a;
   cout<<"Enter second number :";
   cin>>b;

   cout<<"Before swapping, first number : "<<a<<", second number : "<<b;

   c=a;
   a=b;
   b=c;
   cout<<"\nAfter swapping, first number : "<<a<<", second number : "<<b;
   return 0;

}
