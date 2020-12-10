#include<iostream>
using namespace std;
int main()
{
    float a,b,c;

    cout<<"Enter 1st float number : ";
    cin>>a;
    cout<<"Enter 2nd float number :";
    cin>>b;
    cout<<"Enter 3rd float number :";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is the greatest. ";
    }
    if(b>a && b>c)
    {
        cout<<b<<" is the greatest.";
    }
    if(c>a && c>b)
    {
        cout<<c<<" is the greatest.";
    }
}
