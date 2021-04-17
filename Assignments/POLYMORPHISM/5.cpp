#include<iostream>
using namespace std;

class Demo{
    int num;
public:
    Demo():num(8){}
    void operator ++()
    {
        num+=2;
    }
    void operator -()
    {
        num-=5;
    }
    void display()
    {
        cout<<"\nThe Count is "<<num;
    }
};
int main()
{
    Demo d;
    ++d; //it gives 8+2=10
    d.display();
    -d; //it gives 10-5=5
    d.display();
}
