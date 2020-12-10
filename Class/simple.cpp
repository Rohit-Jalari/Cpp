#include<iostream>
#include<string>
using namespace std;

class student
{
private :
    char name[20];
    int roll;
public :
    void input()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"\nEnter your Roll number : ";
        cin>>roll;
    }
    void output()
    {
        cout<<"\nName = "<<name<<"\tRoll number : "<<roll;
    }
};

int main()
{
    student s;
    s.input();
    s.output();
    return 0;
}

