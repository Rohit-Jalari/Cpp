#include<iostream>

using namespace std;

class Room
{
protected :
    int length;
    int breadth;
public :
    int area()
    {
        return length*breadth;
    }
};

class BedRoom : public Room
{
    int height;

public :
    void setData(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    int volume()
    {
        return length*breadth*height;
    }
};

int main()
{
    BedRoom b;

    int L,B,H;

    cout<<"\nEnter the length : ";
    cin>>L;
    cout<<"\nEnter the breadth : ";
    cin>>B;
    cout<<"\nEnter the height : ";
    cin>>H;

    b.setData(L,B,H);
    cout<<"\nThe Volume of the Bed Room "
    " is "<<b.volume()<<endl;
}
