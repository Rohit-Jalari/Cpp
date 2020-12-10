#include<iostream>

using namespace std;

class Animal
{
public :
    void eat()
    {
        cout<<"\nIt can Eat.";
    }
    void sleep()
    {
        cout<<"\nIt can Sleep.";
    }
};
class Cat:public Animal
{
    public :
    void meows()
    {
        cout<<"\nIt meows.";
    }
    void legs()
    {
        cout<<"\nIt has 4 legs.";
    }
};

int main()
{
    Cat cat1;
    cat1.meows();
    cat1.legs();
    cat1.eat();
    cat1.sleep();
}
