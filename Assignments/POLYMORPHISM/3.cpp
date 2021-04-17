#include<iostream>
using namespace std;

class Poly{
public:
    void display(int x,int y)
    {
        cout<<"Integer Number : "<<x;
        cout<<" and Double Number : "<<y<<endl;
    }
    void display(double x)
    {
        cout<<"Double Number : "<<x<<endl;
    }
    void display(int y)
    {
        cout<<"Integer Number : "<<y<<endl;
    }
    void display()
    {
        cout<<"Nothing was sent as Parameter."<<endl;
    }
};
int main()
{
    Poly a;
    a.display();
    a.display(3);
    a.display(2.3);
    a.display(1,2);

}


