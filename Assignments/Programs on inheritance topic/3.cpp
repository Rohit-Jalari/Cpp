#include<iostream>
using namespace std;
class Student
{
protected:
int roll;
public:
void setroll(int r)
{
roll=r;
}
};

class Test: public Student
{
protected:
float sub1, sub2;
public:
void setmark(float m1, float m2)
{
sub1=m1;
sub2=m2;
}
};
class Result : public Test
{
private:
float total;
public:
void display()
{
total=sub1+sub2;
cout<<"\n\tRoll number = "<<roll;
cout<<"\n\tMark in first subject = "<<sub1;
cout<<"\n\tMark in second subject = "<<sub2;
cout<<"\n\tTotal= "<<total;
}
};

int main()

{
int r;
float s1,s2;
cout<<"\nEnter roll number :";
cin>>r;
cout<<"\nEnter marks in two subject :";
cin>>s1>>s2;
Result res;
res.setroll(r);
res.setmark(s1,s2);
res.display();
}
