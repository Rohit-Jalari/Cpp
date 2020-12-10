#include<iostream>

using namespace std;

class Demo{
private :
    int num=10;
public :
    void displayNum()
    {
        cout<<"Num = "<<num;
    }
};

int main()
{
    Demo d1;
    d1.displayNum();
}
