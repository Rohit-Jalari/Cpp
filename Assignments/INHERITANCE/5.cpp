#include<iostream>

using namespace std;

class class1
{
protected :
    int a;
public :
    void get_a(int m)
    {
        a=m;
    }
};

class class2
{
protected :
    int b;
public :
    void get_b(int n)
    {
        b=n;
    }
};

class class3 : public class1,public class2
{
private :
    int sum ;
public :
    void display_sum()
    {
        sum=a+b;
        cout<<"Sum = "<<sum;
    }
};

int main()
{
     class3 obj;
     obj.get_a(5);
     obj.get_b(2);
     obj.display_sum();
}
