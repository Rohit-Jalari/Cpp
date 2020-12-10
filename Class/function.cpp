#include<iostream>

using namespace std;
class student
{
    int m;
    void read()
    {
        cout<<"\nThe value is : "<<m<<endl;
    }
public :
    void write()
    {
        cout<<"\nEnter a value  :";
        cin>>m;
    }
    void update()
    {
        read();
        cout<<"\nEnter the new value : "<<endl;
        cin>>m;
        read();
    }
};

int main()
{
    student s1;
    s1.write();
    s1.update();
    return 0;
}
