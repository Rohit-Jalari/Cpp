#include<iostream>

using namespace std;

class Parent
{
public :

    Parent()
    {
        cout<<"\nConstructor of Parent Class."<<endl;
    }
    ~Parent()
    {
        cout<<"Destructor of Parent Class."<<endl;
    }
};
class Child:public Parent
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

