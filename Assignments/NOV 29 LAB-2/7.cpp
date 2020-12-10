#include<iostream>
using namespace std;

class Student{

    string name;
    int roll;
    int Class;
    string address;

public :

    Student()
    {
        cout<<"\nEnter the Name of the Student    : ";
        getline(cin,name);
        cout<<"\nEnter the Address of the Student : ";
        getline(cin,address);
        cout<<"\nEnter the Roll No.of the Student : ";
        cin>>roll;
        cout<<"\nEnter the Class of the Student   : ";
        cin>>Class;

    }
    void displayData()
    {
        cout<<"\n\tName     : "<<name;
        cout<<"\n\tClass    : "<<Class;
        cout<<"\n\tRoll No. : "<<roll;
        cout<<"\n\tAddress  : "<<address;
    }
    ~Student()
    {
        cout<<"\n\nEnd of the Program.";
    }
};

int main()
{
    Student student1;
    student1.displayData();
}
