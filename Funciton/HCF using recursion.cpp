#include<iostream>
using namespace std;
int HCF(int n1,int n2)
{
    if(n1==0)      { return n2; }
    else if(n2==0) { return n1; }
    else if(n1==n2){ return n1; }
    else if(n1>n2) { return HCF(n1-n2,n2); }
    else           { return HCF(n1,n2-n1); }
}
int main()
{
    int n1,n2;

    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;

    cout<<"The HCF of "<<n1<<" & "<<n2<<" is "<<HCF(n1,n2)<<" . ";
}
