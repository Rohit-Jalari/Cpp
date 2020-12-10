#include<iostream>
using namespace std;
int main()
{
    int num1,num2,HCF,i=1;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    while(i<=num2)
    {
        if(num1%i==0 && num2%i==0)
        {
            HCF=i;
        }
        i++;
    }
    cout<<"The HCF of "<<num1<<" & "<<num2<<" is "<<HCF<<".";
}
