#include<iostream>

using namespace std;

class Student{
    string name;
    int roll;
    double marks;
public :
    void getData()
    {
        cout<<"Enter your Name : ";
        getline(cin,name);
        cout<<"Enter your Roll Number : ";
        cin>>roll;
        cout<<"Enter your Marks : ";
        cin>>marks;
    }
    void displayData()
    {
        cout<<"\n\tName    : "<<name<<endl;
        cout<<"\tRoll No. : "<<roll<<endl;
        cout<<"\tMarks    : "<<marks<<endl;
    }
};

int main()
{
    Student student1;
    student1.getData();
    student1.displayData();
}
