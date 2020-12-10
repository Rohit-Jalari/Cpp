#include<iostream>

using namespace std;

class Rectangle{
    float length;
    float breadth;
public :
    void ReadData()
    {
        cout<<"\nEnter the Length of the rectangle : ";
        cin>>length;
        cout<<"\nEnter the breadth of the rectangle : ";
        cin>>breadth;
    }
    void DisplayArea()
    {
        cout<<"\nThe Area of the rectangle having length "<<length<<" and "
        "breadth "<<breadth<<" is "<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle rect1,rect2;
    cout<<"\tFor First Object : "<<endl;
    rect1.ReadData();
    rect1.DisplayArea();
    cout<<"\n\tFor Second Object : "<<endl;
    rect2.ReadData();
    rect2.DisplayArea();
}
