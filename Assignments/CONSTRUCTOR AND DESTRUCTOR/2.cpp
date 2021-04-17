#include<iostream>
using namespace std;

class Rectangle{
    float breadth;
    float length;
public :
    Rectangle()
    {
        length=0;
        breadth=0;
    }
    Rectangle(float l,float b)
    {
        length=l;
        breadth=b;
        cout<<"The Area of the Rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<length*breadth;
    }
    ~Rectangle(){}
};
int main()
{
    Rectangle r(3.3,3.3);
}
