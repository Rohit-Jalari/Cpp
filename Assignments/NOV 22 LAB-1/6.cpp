#include<iostream>

using namespace std;
class ParentClass{
    public :
    int var1 = 100;
};
class ChildClass : public ParentClass{
    public :
    int var2 = 500;
};
int main()
{
    ChildClass obj;
    cout<<obj.var2<<endl;
    cout<<obj.var1;
}
