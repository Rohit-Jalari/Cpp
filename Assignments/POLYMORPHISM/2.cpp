#include<iostream>
using namespace std;

class Poly{
public:
    void multiply(int x,int y)
    {
        cout<<endl<<x<<"*"<<y<<" = "<<x*y<<endl;
    }
    void multiply(double x,double y)
    {
        cout<<endl<<x<<"*"<<y<<" = "<<x*y<<endl;
    }
    void multiply(int x,double y)
    {
        cout<<endl<<x<<"*"<<y<<" = "<<x*y<<endl;
    }
    void multiply(double x,int y)
    {
        cout<<endl<<x<<"*"<<y<<" = "<<x*y<<endl;
    }
};
int main()
{
    Poly a;
    a.multiply(2.3,4.2);
    a.multiply(3,2.5);
    a.multiply(4.5,2);
    a.multiply(1,2);
}

