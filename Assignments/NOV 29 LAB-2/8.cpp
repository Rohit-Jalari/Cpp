#include<iostream>

using namespace std;

float Volume(float r,float PI)
{
    return (4/3.0)*PI*(r*r*r);
}
float Volume(float r,float h,float PI)
{
    return PI*r*r*h;
}
float Volume(float l)
{
    return l*l*l;
}

int main()
{
    float radius,height,length,PI=22/7.0;
    cout<<"\nEnter the Radius of the Sphere : ";
    cin>>radius;
    cout<<"\nEnter the Height of the Cylinder : ";
    cin>>height;
    cout<<"\nEnter the Length of the Cube : ";
    cin>>length;
    cout<<"\n\tVolume of the Sphere   : "<<Volume(radius,PI);
    cout<<"\n\tVolume of the Cylinder : "<<Volume(radius,height,PI);
    cout<<"\n\tVolume of the Cube     : "<<Volume(length);
}
