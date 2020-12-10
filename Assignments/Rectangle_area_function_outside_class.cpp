#include<iostream>

using namespace std ;

class Rectangle{

    float length;
    float breadth;

public :
    void ReadData();
    void DisplayArea();
};

void Rectangle :: ReadData()
{
    cout<<"\nEnter the Length of the Rectangle : ";
    cin>>length;
    cout<<"\nEnter the Breadth of the Rectangle : ";
    cin>>breadth;
}

void Rectangle :: DisplayArea()
{
    cout<<"\nThe Area of the Rectangle having length "<<length<<
    " and breadth "<<breadth<<" is "<<length*breadth<<endl;
}

int main()
{
    Rectangle rect1,rect2;
    cout<<"\n\tFor First Object : "<<endl;
    rect1.ReadData();
    rect1.DisplayArea();
    cout<<"\n\tFor Second Object : "<<endl;
    rect2.ReadData();
    rect2.DisplayArea();

}
