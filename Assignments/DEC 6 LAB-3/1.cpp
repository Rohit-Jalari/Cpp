#include<iostream>

using namespace std;

class Interest{
    float principalAmount;
    float time;
    float rate;
public :
    void getData()
    {
        cout<<"\nRate = 8 % (fixed)";
        cout<<"\nEnter the Principal Amount : ";
        cin>>principalAmount;
        cout<<"\nEnter the Time (In Years) : ";
        cin>>time;
    }
    void displayData(float rate=8)
    {
        cout<<"\n";
        cout<<"\tPrincipal Amount : "<<principalAmount<<endl;
        cout<<"\tTime (In Years)  : "<<time<<endl;
        cout<<"\tRate             : "<<rate<<"%"<<endl;
        cout<<"\tSimple Interest   : "<<((principalAmount*time*rate)/100)<<endl;
        cout<<"------------------------------------------------"<<endl;
    }
};

int main()
{
    Interest I1,I2,I3;
    cout<<"\n\nFor First Customer : "<<endl;
    I1.getData();
    I1.displayData();
    cout<<"\n\nFor Second Customer : "<<endl;
    I2.getData();
    I2.displayData();
    cout<<"\n\nFor Third Customer : "<<endl;
    I3.getData();
    I3.displayData();
}
