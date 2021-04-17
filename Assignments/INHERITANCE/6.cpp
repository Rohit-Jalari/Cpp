#include<iostream>

using namespace std;

class Base1
{
protected :
    float maths;
    float english;
    float physics;
    Base1()
    {
        maths=70.0;
        english=55.5;
        physics=84.0;
    }
};
class Base2
{
protected :
    float cpp;
    float nepali;
    Base2()
    {
        cpp=70.5;
        nepali=65;
    }
};

class Base3 : public Base1, public Base2
{
public :
    float total=0;
    float getTotal()
    {
        total = maths+english+physics+cpp+nepali;
        return total;
    }
};

int main()
{
    Base3 b;
    cout<<"\nTotal Marks = "<<b.getTotal()<<endl;
}
