#include<iostream>

using namespace std;

class Interest{

    float principal;
    float rate;
    float time;

public :

    void getData()
    {
         cout<<"\nEnter the Principal Amount : ";
         cin>>principal;
         cout<<"\nEnter the Time in Years : ";
         cin>>time;
         cout<<"\nEnter the Interest Rate : ";
         cin>>rate;
    }

    void displayData(float rate=8)
    {
        cout<<"\n\n\tPrinciple Amount : "<<"Rs."<<principal<<endl;
            cout<<"\tTime             : "<<time<<" Years "<<endl;
            cout<<"\tInterest Rate    : "<<rate<<" %"<<endl;
            cout<<"\tSimple Interest  : "<<"Rs."<<(principal*time*rate)/100.0<<endl;
    }
};

int main()
{
    Interest C1,C2,C3;
    cout<<"\nFor First Customer : "<<endl;
    C1.getData();
    C1.displayData();
    cout<<"\nFor Second Customer : "<<endl;
    C2.getData();
    C2.displayData();
    cout<<"\nFor Third Customer : "<<endl;
    C3.getData();
    C3.displayData();
}
