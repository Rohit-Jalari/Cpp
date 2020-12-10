#include<iostream>

using namespace std;

class Data{
    int num;
    char a;
public :
    void setdata(int num,char a)
    {
        this->num=num;
        this->a=a;
    }
    void displaydata()
    {
        cout<<"\nNumber = "<<num;
        cout<<"\nCharacter = "<<a;
    }
};

int main()
{
    Data obj1;
    obj1.setdata(55,'c');
    obj1.displaydata();
}
