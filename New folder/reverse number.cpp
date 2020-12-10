#include<iostream>
using namespace std;
int main()
{
    int num,num_dup,rev=0;

    cout<<"Enter the number : ";
    cin>>num;
    num_dup=num;
    while(num_dup!=0)
    {
        rev=rev*10+(num_dup%10);
        num_dup/=10;
    }
    cout<<"The reverse of "<<num<<" is "<<rev<<".";
}
