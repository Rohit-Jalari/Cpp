#include<iostream>
using namespace std ;
int main()
{
    int num,t1=0,t2=1,next_term;

    cout<<"Enter the number of terms : ";
    cin>>num;
    cout<<"\tFIBONACCI SERIES with "<<num<<" terms : "<<endl;
    for(int i=1;i<=num;i++)
    {
        if(i==1)
        {
            cout<<t1<<" , ";
            continue;
        }
        if(i==2)
        {
            cout<<t2;
            continue;
        }
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        cout<<" , "<<next_term;
    }
}
