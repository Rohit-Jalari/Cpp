#include<iostream>
using namespace std;
class shape
{
protected:
float breadth, height, area;
public:
void getshapedata()
{
cout<<"\nEnter breadth:";
cin>>breadth;

cout<<"\nEnter height:";
cin>>height;
}
};
class triangle: public shape
{
public:
void calarea()
{
area=(breadth * height)/2;
}
void display()
{
cout<<"\nThe area of triangle is "<<area;
}
};
class rectangle: public shape
{
public:
void calarea()
{
area=breadth * height;
}
void display()
{
cout<<"\nArea of rectangle is "<<area;
}

};
int main()
{
triangle T;
rectangle R;
cout<<"\nEnter triangle data:";
T.getshapedata();
cout<<"\nEnter rectangle data:";
R.getshapedata();
T.calarea();
R.calarea();
T.display();
R.display();
}
