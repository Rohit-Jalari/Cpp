#include<iostream>

using namespace std;
int test_age(int age)
{
    try
{
    if(age<18)
    {
        throw(age);
    }else
    {
        cout<<"----------------------------------------";
        cout<<"\nEligible to Vote : Allowed.\n";
        cout<<"\nYou can continue the process.\n";
        cout<<"----------------------------------------";
    }
}
catch(int age)
{
    cout<<"--------------------------------------------------";
    cout<<"\nEligible to Vote : Denied.\n";
    cout<<"\nYou cannot continue the process any further.\n";
    cout<<"--------------------------------------------------";
}
}

int main()
{
    int age;
    cout<<"\nEnter Your Age : ";
    cin>>age;
    test_age(age);
}
