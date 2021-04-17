#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class information
{
protected :
    string name;
    string address;
    int grade;
    char section[1];
    int roll_number;
public :
    void getData()
    {
        cout<<"\nEnter the Name : ";
        getline(cin,name);

        fflush(stdin);
        cout<<"\nEnter the Address : ";
        getline(cin,address);
        cout<<"\nEnter the Roll number : ";
        cin>>roll_number;
        cout<<"\nEnter the Class : ";
        cin>>grade;
        cout<<"\nEnter the Section : ";
        cin>>section[0];
    }
};
class student : public information
{
public :
    void displayData()
    {
        cout<<endl<<endl;
        cout<<"Name     : "<<name<<endl;
        cout<<"Class    : "<<grade<<" "<<section[0]<<endl;
        cout<<"Roll no. : "<<roll_number<<endl;
        cout<<"Address  : "<<address<<endl;
    }
};

int main()
{
    student s;
    s.getData();
    s.displayData();
}
