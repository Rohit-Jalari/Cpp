
#include<iostream>

using namespace std;

class Parent1
{
public :

    Parent1()
    {
        cout<<"Constructor of 1st Parent Class."<<endl;
    }
    ~Parent1()
    {
        cout<<"Destructor of 1st Parent Class."<<endl;
    }
};
class Parent2
{
public :

    Parent2()
    {
        cout<<"Constructor of 2nd Parent Class."<<endl;
    }
    ~Parent2()
    {
        cout<<"Destructor of 2nd Parent Class."<<endl;
    }
};
class Child:public Parent2,public Parent1
{
public:
    Child()
    {
        cout<<"Constructor of Child Class."<<endl;
    }
    ~Child()
    {
        cout<<"\nDestructor of Child Class."<<endl;
    }
};

int main()
{
    Child c;
}

