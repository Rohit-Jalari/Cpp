#include<iostream>
using namespace std;
const double PI=22.0/7;
class Areas{
    float length,breadth,radius;
public :
    void getdata(float l,float b,float r)
    {
        length=l;
        breadth=b;
        radius=r;
    }
    float area(float length)
    {
        return length*length;
    }
    float area(float length,float breadth)
    {
        return length*breadth;
    }
    float area(double PI,float radius)
    {
        return PI*radius*radius;
    }

};

int main()
{
    Areas obj1;
    float l,b,r;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"\nEnter the breadth : ";
    cin>>b;
    cout<<"\nEnter the radius : ";
    cin>>r;
    obj1.getdata(l,b,r);

    cout<<"\n--------------------------------------------------------------";
    cout<<"\nThe area of square having length "<<l<<" is "<<obj1.area(l)<<endl;
    cout<<"\nThe area of rectangle having length "<<l<<" and breadth "<<b<<" is "<<obj1.area(l,b)<<endl;
    cout<<"\nThe area of circle having radius "<<r<<" is "<<obj1.area(PI,r);
    cout<<"\n--------------------------------------------------------------";
}
