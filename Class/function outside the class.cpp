#include<iostream>

using namespace std;

class item
{
    int a ,b;
    public :
        void getdata(int,int);
        void add();
};
void item::getdata(int n1,int n2)
{
    a=n1;
    b=n2;
}
void item::add()
{
    int add;
    add=a+b;
    cout<<add;
}

int main()
{
    item s1;
    int n1,n2;
    cin>>n1>>n2;
    s1.getdata(n1,n2);
    s1.add();

}
