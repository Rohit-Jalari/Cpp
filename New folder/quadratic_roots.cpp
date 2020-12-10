#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"ax2 + bx + c = 0";
    cout<<"\nEnter the value of a , b and c :";

    cout<<"\n------------------------------";
    cout<<"\n";
    cout<<"\n\ta = ";
    cin>>a;
    cout<<"\n\tb = ";
    cin>>b;
    cout<<"\n\tc = ";
    cin>>c;

    int dis_result;
    dis_result=b*b-4*a*c;

    if(dis_result>0)
    {
       cout<<"\nThe Roots are "<<((-b+sqrt(dis_result))/(2.0*a))<<" & "<<((-b-sqrt(dis_result))/(2.0*a));
    }

    else if(dis_result<0)
    {
        cout<<"\nThe Roots are "<<-b/(2.0*a)<<" + "<<(sqrt(-dis_result))/(2.0*a)<<"i"
       "  &  "<<-b/(2.0*a)<<" - "<<(sqrt(-dis_result))/(2.0*a)<<"i";
    }
    else
    {
        cout<<"\nThe Root is "<<-b/(2.0*a);
    }

}

