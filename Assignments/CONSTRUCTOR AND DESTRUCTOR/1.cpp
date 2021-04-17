#include<iostream>
using namespace std;

class Sum{
    int num1,num2;
public:
    Sum()
    {
        num1=0;
        num2=0;
    }
    Sum(int num1,int num2)
    {
        this->num1=num1;
        this->num2=num2;
        cout<<endl<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
    }
    ~Sum(){}
};
int main()
{
    Sum s(3,2);
}
