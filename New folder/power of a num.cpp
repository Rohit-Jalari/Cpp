#include<iostream>
using namespace std;
int main()
{
    int num,power,result=1;

    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>power;

    for(int i=1;i<=power;i++)
    {
        result*=num;
    }
    cout<<num<<" raised to the power "<<power<<" is equal to "<<result<<".";
}
