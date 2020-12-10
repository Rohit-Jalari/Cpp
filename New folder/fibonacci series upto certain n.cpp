#include<iostream>
using namespace std;
int main()
{
    int num,t1=0,t2=1,next_term;
     cout<<"Enter the last number of the series : ";
     cin>>num;
     cout<<"\tFIBONACCI SERIES upto "<<num<<" : "<<endl;

     cout<<t1<<" , ";
     cout<<t2;
     next_term=t1+t2;

     while(next_term<=num)
     {
        cout<<" , "<<next_term;
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
     }
}
