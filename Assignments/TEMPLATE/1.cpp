#include<iostream>

using namespace std;

template<class T>
class Addition{
    T num1,num2;
public:
    Addition(T num1,T num2)
    {
        this->num1=num1;
        this->num2=num2;
    }
    void show()
    {
        cout<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
    }
};
int main()
{
    Addition<int>a1(2,3);
    Addition<float>a2(2.3,3.2);
    a1.show();
    a2.show();
}
