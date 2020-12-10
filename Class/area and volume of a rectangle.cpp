#include<iostream>
#include<stdlib.h>
using namespace std;

class rectangle{
private :
    float length,breadth,height ;

public :
    void getdata(float l,float b,float h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    float area_of_rectangle()
    {
        return length*breadth;
    }
    float volume_of_rectangle()
    {
        return length*breadth*height;
    }
};

int main()
{
    rectangle rect_1;
    int n;
    float length_input,breadth_input,height_input;

    cout<<"\n' 1 ' for the area of the rectangle."<<endl;
    cout<<"\n' 2 ' for the volume of the rectangle."<<endl;
    cout<<"\n' 0 ' to terminate the program."<<endl;

    cout<<"\nEnter either ' 1 ' or ' 2 ' or ' 0 '  :  ";
    cin>>n;
    system("CLS");

    if(n==1 || n==2 || n==0)
    {
        if(n==1)
        {
            cout<<"Enter the length of the rectangle : ";
            cin>>length_input;
            cout<<"\nEnter the breadth of the rectangle : ";
            cin>>breadth_input;

            rect_1.getdata(length_input,breadth_input,height_input);

            cout<<"\nThe area of the rectangle is "<<rect_1.area_of_rectangle()<<endl;
            cout<<"\n---------------------------------------------"<<endl;

            main();

        }
        else if(n==2)
        {
            cout<<"Enter the length of the rectangle : ";
            cin>>length_input;
            cout<<"\nEnter the breadth of the rectangle : ";
            cin>>breadth_input;
            cout<<"\nEnter the heigth of the rectangle : ";
            cin>>height_input;

            rect_1.getdata(length_input,breadth_input,height_input);

            cout<<"\nThe volume of the rectangle is "<<rect_1.volume_of_rectangle()<<endl;
            cout<<"\n---------------------------------------------"<<endl;
            main();
        }
        else
        {
            cout<<"\nThank You for using the program."<<endl;
            cout<<"\n---------------------------------------------"<<endl;

        }


    }
    else
    {
        cout<<"\nERROR ! Invalid Input ."<<endl;
        cout<<"\n---------------------------------------------"<<endl;
        main();
    }
}
