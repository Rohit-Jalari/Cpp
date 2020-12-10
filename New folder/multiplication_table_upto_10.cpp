#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter a number :";
    cin>>a;

    cout<<"The multiplication table of "<<a<<" : ";
    for(i=1;i<=10;i++)
    {
        cout<<" \n ";
        cout<<a<< " * "<<i<<" = "<<a*i;
    }
}
