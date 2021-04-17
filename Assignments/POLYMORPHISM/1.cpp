#include<iostream>
using namespace std;

class Addition{
public:
    void sum(int x,int y)
    {
        cout<<endl<<x<<"+"<<y<<" = "<<x+y<<endl;
    }
    void sum(double x,double y)
    {
        cout<<endl<<x<<"+"<<y<<" = "<<x+y<<endl;
    }
    void sum(int x,int y,int z)
    {
        cout<<endl<<x<<"+"<<y<<"+"<<z<<" = "<<x+y+z<<endl;
    }
    void sum(double x,double y,double z)
    {
        cout<<endl<<x<<"+"<<y<<"+"<<z<<" = "<<x+y+z<<endl;
    }
};
int main()
{
    Addition a;
    a.sum(2.3,4.2);
    a.sum(3,2,1);
    a.sum(4.5,3.2,1.2);
    a.sum(1,2);
}
