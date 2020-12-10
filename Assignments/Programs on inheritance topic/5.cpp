#include<iostream>
using namespace std;
class Student
{
private:
int roll;

public:
void setroll()
{
cout<<"Enter roll number :";
cin>>roll;
}
void showroll()
{
cout<<"Roll = "<<roll;
}
};
class Test: public Student
{
protected:
float com,eng;
public:
void setmark()
{
cout<<"Enter marks of computer and English : ";
cin>>com>>eng;
}
void showmark()
{
cout<<"\nComputer = "<<com;
cout<<"\nEnglish = "<<eng;
}
};

class Sport
{
protected:
float score;
public:
void setscore()
{
cout<<"Enter score in sports :";
cin>>score;
}
void showscore()
{
cout<<"\nScore in sports = "<<score;
}
};
class Result: public Test, public Sport
{
private:
float tot;
public:
void showtotal()
{
tot=com+eng+score;
cout<<"\nTotal obtained marks = "<<tot;
}
};

int main()
{
Result res;
res.setroll();
res.setmark();
res.setscore();
res.showroll();
res.showmark();
res.showscore();
res.showtotal();
}
