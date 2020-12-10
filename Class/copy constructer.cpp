#include<iostream>
using namespace std;
class Demo{
    int id;
    string name;
    public:
    Demo()
    {
        id=5;
        name="David";
    }
    void display()
    {
        cout<<"\tName : "<<name<<endl;
        cout<<"Id   : "<<id<<endl;
    }
};
int main()
{
    Demo d;
    d.display();
}
