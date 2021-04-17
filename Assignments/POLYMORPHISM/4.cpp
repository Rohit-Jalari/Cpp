#include<iostream>
using namespace std;

class Poly{
public:
    void order_parameter(int x,double y)
    {
        cout<<"\nInteger Number = "<<x<<" and Double Number = "<<y<<endl;
    }
    void order_parameter(double x,int y)
    {
        cout<<"\nDouble Number = "<<x<<" and Integer Number = "<<y<<endl;
    }
};
int main()
{
    Poly p;
    cout<<"\nDisplaying Parameter in order : "<<endl;
    p.order_parameter(5,2.5);
    p.order_parameter(2.5,5);
}
