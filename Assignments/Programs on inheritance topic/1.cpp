#include<iostream>
using namespace std;
class Room
{
protected:
float length, breadth;
public:

int area()
{
return(length*breadth);
}
};
class BedRoom : public Room
{
private:
float height;

public:
void setData(int l, int b, int h)
{
length=l;
breadth=b;
height=h;
}
int volume()
{
return(length * breadth * height);
}
};

int main()
{
BedRoom b;
b.setData(3,4,5);
cout<<"Area of bedroom= "<<b.area()<<endl;
cout<<"Volume of bedroom="<<b.volume();
}
