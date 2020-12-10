#include<iostream>

using namespace std;


int Add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int main()
{
    int num1,num2,sum;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"\nEnter second number : ";
    cin>>num2;
    cout<<"\n"<<num1<<" + "<<num2<<" = "<<Add(num1,num2);

}

