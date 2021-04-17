#include<iostream>
using namespace std;

template<class T>
T add(T num1,T num2)
{
    cout<<endl<<num1<<"+"<<num2<<" = "<<num1+num2;
}
int main()
{
    add<int>(2,2);
    add<float>(4.3,4.2);
}
