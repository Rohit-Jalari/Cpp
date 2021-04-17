#include<iostream>
using namespace std;

class Time
{
    int hrs,mins;
public:
    Time(int h,int m)
    {
        hrs=h;
        mins=m;
    }
    void display()
    {
        cout<<hrs<<" hours ";
        cout<<mins<<" minutes ";
    }
    operator int()
    {
        return hrs*60+mins;
    }
};

int main()
{
    int duration;
    Time t(3,20);
    t.display();
    cout<<"\nType Casting................\n";
    duration=t;
    cout<<duration<<" minutes";
}
