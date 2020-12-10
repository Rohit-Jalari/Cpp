#include<iostream>

using namespace std;

class Person{
public :
    string name;
    int age;

    void setValue()
    {
        name="Sangeet Poudel";
        age= 21;
    }
    void displayValue()
    {
        cout<<"\nDIsplaying the information about Person : "<<endl;
        cout<<"\n\tName = "<<name;
        cout<<"\n\tAge  = "<<age;
    }
};

class Student : public Person{
    int Class;
    string branch;
public :
    Student()
    {
        name="Sudip Bhandari";
        age=21;
        Class=12;
        branch ="Software Engineering";
        cout<<"\n\nDIsplaying the information about Student : "<<endl;
        cout<<"\n\tName   = "<<name;
        cout<<"\n\tAge    = "<<age;
        cout<<"\n\tClass  = "<<Class;
        cout<<"\n\tBranch = "<<branch;
    }
};

class Employee : public Person{
    float salary;
    int experience;
public :
    Employee()
    {
        name="Arpit Hamal";
        age=22;
        salary=50000;
        experience=2;
        cout<<"\n\nDIsplaying the information about Employee : "<<endl;
        cout<<"\n\tName   = "<<name;
        cout<<"\n\tAge    = "<<age;
        cout<<"\n\tSalary = "<<salary;
        cout<<"\n\tExperience in Work = "<<experience<<" Years ";
    }
};

int main()
{
    Person p1;
    p1.setValue();
    p1.displayValue();

    Student s1;

    Employee e1;

}
