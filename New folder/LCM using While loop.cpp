#include<iostream>
using namespace std;
int main()
{
    int n1,n2,LCM=0,i;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    if(n1>n2)
    {
        i=n1;
    }
    else
    {
        i=n2;
    }
    while(LCM==0)
    {
        if(i%n1==0 && i%n2==0)
        {
            LCM=i;
        }
        i++;
    }
    cout<<"The LCM of "<<n1<<" & "<<n2<<" is "<<LCM;
}
