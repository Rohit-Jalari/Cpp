#include<iostream>
using namespace std;
class class1
{
protected:
int n;
public:

void getn(int p)
{
n=p;
}
};

class class2
{
protected:
int m;
public:
void getm(int q)
{
m=q;
}
};
class class3: public class1, public class2
{
public:
void displaytotal()
{

cout<<"Sum ="<<n+m;
}
};

int main()
{
class3 a;
a.getm(4);
a.getn(5);
a.displaytotal();
}
