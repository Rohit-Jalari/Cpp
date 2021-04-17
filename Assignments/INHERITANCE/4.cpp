#include<iostream>

using namespace std;

class Measurement
{
protected :
    float length,breadth,height;
public :
    float area()
    {
        return length*breadth;
    }
    float volume()
    {
        return length*breadth*height;
    }

};

class Room : public Measurement
{

public :
    void setData(float l,float b,float h)
    {
        length=l;
        breadth=b;
        height=h;
    }

};

int main()
{
    Room r;
    r.setData(5.0,4.0,2.0);
    cout<<"\nThe Area of the Room is "<<r.area()<<endl;
    cout<<"\nThe Volume of the Room is "<<r.volume()<<endl;
}
