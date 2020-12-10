#include<iostream>
using namespace std;
int main()
{
    int a,lower_range,upper_range;

    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter the lower range of multiplication table :";
    cin>>lower_range;
    cout<<"Enter the upper range of multiplication tale :";
    cin>>upper_range;

    cout<<"The multiplication table of "<<a<<" with lower range of "<<lower_range<<" and upper range of "<<upper_range<<" : ";
    while(lower_range<=upper_range)
    {
        cout<<"\n";
        cout<<a<<" * "<<lower_range<<" = "<<a*lower_range;
        lower_range++;
    }


}
