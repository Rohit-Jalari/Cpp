#include<iostream>
using namespace std;

class Demo{
    int l,b;
public:
    Demo(int length,int breadth)
    {
        l=length;
        b=breadth;
    }
void area()
{

    cout<<"\tArea = "<<l*b;;
}
};
int main()
{
    Demo d(5,6);
    d.area();
}
