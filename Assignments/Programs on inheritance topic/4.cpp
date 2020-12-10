#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
private:

char name[30];
float salary;

public:
void setName(char *n)
{
strcpy(name,n);
}
void setSalary(float s)
{
salary=s;
}
char *getName()
{
return name;
}
float getSalary()
{
return salary;
}
};
class Manager: public Employee
{
private:
char section_name[50];
public:
void setSection_name(char *sn)
{

strcpy(section_name,sn);
}
char * getSection_name()
{

return section_name;
}
};
class Supervisor: public Employee
{
private:
int group_id;
public:
void setGroup_id(int gid)
{
group_id=gid;
}
int getGroup_id()
{
return group_id;
}
};

int main()
{

Manager m;
m.setName("Elon Musk");
m.setSalary(50000);
m.setSection_name("Accounts");

cout<<"\nName= "<<m.getName();
cout<<"\nSalary= "<<m.getSalary();
cout<<"\nSection= "<<m.getSection_name();

Supervisor s;
s.setName("Bill Gates");
s.setSalary(40000);
s.setGroup_id(5);
cout<<"\n";
cout<<"\nName= "<<s.getName();
cout<<"\nSalary= "<<s.getSalary();
cout<<"\nGroup ID= "<<s.getGroup_id();
}
