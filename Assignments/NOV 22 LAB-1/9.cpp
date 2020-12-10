#include<iostream>

using namespace std;

class Animal{
public :
    void Makesound()
    {
        cout<<"\nThe Cat Meows.";
        cout<<"\nThe Dog Barks.";
    }
};
class Horses : public Animal{
    public :
    void Makesound()
    {
        cout<<"\nThe Horses Neigh.";
    }
} ;
class Rabbit : public Animal{
    public :
    void Makesound()
    {
        cout<<"\nThe Rabbit squeaks.";
    }
};
class Frogs : public Animal{
    public :
    void Makesound()
    {
        cout<<"\nThe Frog croaks.";
    }
};

int main()
{
    Animal animal1;
    Horses horse1;
    Rabbit rabbit1;
    Frogs frog1;

    animal1.Makesound();
    horse1.Makesound();
    rabbit1.Makesound();
    frog1.Makesound();
}

