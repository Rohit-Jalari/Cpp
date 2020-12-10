#include<iostream>
using namespace std;
int main()
{
    int a,dup_a,factorial=1;
    cout<<"Enter a number :";
    cin>>a;
    dup_a=a;
    while(dup_a!=0)
    {
        factorial=factorial*dup_a;
        dup_a=dup_a-1;
    }
    cout<<"The factorial of "<<a<<" is "<<factorial;
}
