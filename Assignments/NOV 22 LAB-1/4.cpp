#include<iostream>

using namespace std;

int main()
{

    int* ptr,var;
    cout<<"Enter a number : ";
    cin>>var;
    ptr=&var;
    cout<<"\nAddress of the variable = "<<ptr;
    cout<<"\nValue of the variable = "<<*ptr;

}
