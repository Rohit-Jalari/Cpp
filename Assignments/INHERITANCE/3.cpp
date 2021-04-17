#include<iostream>

using namespace std;

class Marks
{
protected :
    float maths;
    float physics;
    float cpp;
public :

void get_data()
{
    cout<<"\nEnter the Marks in Maths : ";
    cin>>maths;
    cout<<"\nEnter the Marks in Physics : ";
    cin>>physics;
    cout<<"\nEnter the Marks in C++ : ";
    cin>>cpp;
}

};

class student : public Marks
{
    string name;
    int roll;

public :
    void get_student_data()
    {
        cout<<"\nEnter the Name of the Student : ";
        getline(cin,name);
        cout<<"\nEnter the Roll number of the Student : ";
        cin>>roll;
    }
    void display_record()
    {
        cout<<"\nName     = "<<name;
        cout<<"\nRoll No. = "<<roll;
        cout<<"\nMarks in Maths   = "<<maths;
        cout<<"\nMarks in Physics = "<<physics;
        cout<<"\nMarks in C++     = "<<cpp;
    }

    void display_result()
    {
        float total = maths+physics+cpp;
        float percentage = total/3;

        cout<<"\nTotal Marks obtained = "<<total;
        cout<<"\nPercentage  obtained = "<<percentage;

        if(percentage<=100 || percentage>=90)
        {
            cout<<"\nScore Obtained  = A+ ";
        }
        else if(percentage>=80)
        {
            cout<<"\nScore Obtained  = A ";
        }
        else if(percentage>=70)
        {
            cout<<"\nScore Obtained  = B+ ";
        }
        else if(percentage>=60)
        {
            cout<<"\nScore Obtained  = B ";
        }
        else if(percentage>=50)
        {
            cout<<"\nScore Obtained  = C ";
        }
        else if(percentage>=40)
        {
            cout<<"\nScore Obtained  = D ";
        }
        else
        {
            cout<<"\nScore Obtained  = E ";
        }

    }
};

int main()
{
    student s;
    s.get_student_data();
    s.get_data();
    s.display_record();
    s.display_result();

}
