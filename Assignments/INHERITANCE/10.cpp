#include<iostream>

using namespace std;

class Person
{
    string name;
    string code;
public :
    void get_person_info()
    {
        cout<<"\nEnter the Name : ";
        getline(cin,name);
        cout<<"\nEnter the Code : ";
        getline(cin,code);
    }
    void show_person_info()
    {
        cout<<"\nName  : "<<name;
        cout<<"\nCode  : "<<code;
    }

};
class Account : public Person
{
    float pay;

public :
    void get_pay()
    {
        cout<<"\nEnter the pay (In Rs.) : ";
        cin>>pay;
    }
    void show_pay()
    {
        cout<<"\nPay   : Rs. "<<pay;
    }
};
class Admin : public Person
{
    float experience;
public :
    void get_experience()
    {
        cout<<"\nEnter the Experience (In Years) : ";
        cin>>experience;
    }
    void show_experience()
    {
        cout<<"\nExperience : "<<experience<<" years ";
    }
};
class Master : public Account,public Admin
{
public:
    Master()
    {
        cout<<"\n\t---------Enter the Informations------- \n";
    }
};

int main()
{
    Master m;
    m.Admin::get_person_info();
    m.get_pay();
    m.get_experience();
    m.Admin::show_person_info();
    m.show_pay();
    m.show_experience();
}
