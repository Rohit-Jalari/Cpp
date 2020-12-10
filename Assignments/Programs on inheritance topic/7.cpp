#include<iostream>
using namespace std;
class student
{
protected:
float english, sum, avg;

public:
void getstudentdata()
{
cout<<"\nEnter english marks :";
cin>>english;
}
};
class computer : public student
{
float IT, cprog, networks;
public:
void getcomputerdata()
{
cout<<"\nEnter marks in IT:";
cin>>IT;
cout<<"\nEnter marks in cprog:";
cin>>cprog;
cout<<"\nEnter marks in networks:";
cin>>networks;
}
void average()
{ sum=english+IT+cprog+networks;
avg=sum/4;
cout<<"\nAverage marks is "<<avg;
}
};
class mathematics :public student
{
float calculus, stat, algebra;
public:
void getmathdata()
{
cout<<"\nEnter marks in calculus:";
cin>>calculus;
cout<<"\nEnter marks in statistics:";
cin>>stat;
cout<<"\nEnter marks in Linear Algebra:";
cin>>algebra;
}
void average()
{ sum=english+calculus+stat+algebra;
avg=sum/4;
cout<<"\nAverage marks is "<<avg;
}
};

int main()
{
computer C;
mathematics M;
cout<<"\nEnter marks of computer students:";
C.getstudentdata();
C.getcomputerdata();
cout<<"\nEnter marks of mathematics student:";
M.getstudentdata();
M.getmathdata();
C.average();
M.average();
}

