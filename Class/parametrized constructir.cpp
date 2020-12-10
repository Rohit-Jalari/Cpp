#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    string address;
    long int citizenship_no;
public:
    Person(string name_1,int age_1,string address_1,long int citizenship_no_1)
    {
        name=name_1;
        age=age_1;
        address=address_1;
        if(age_1>=16)
        {
        citizenship_no=citizenship_no_1;
        }
        else
        {
            citizenship_no=0;
        }
    }
    void DisplayData()
    {
        cout<<"\tName            = "<<name<<endl;
        cout<<"\tAge             = "<<age<<endl;
        cout<<"\tAddress         = "<<address<<endl;
        cout<<"\tCitizenship no. = "<<citizenship_no<<endl;
    }
};

int main()
{
    Person p("Sunil Poudel",43,"Pokhara-3 ,Nadipur",34572819);
    p.DisplayData();
}
