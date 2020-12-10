#include<iostream>
using namespace std;
int main()
{
    int d1,d2,d3;

    cout<<"Enter the size of 3 dimensional array : "<<endl;
    cin>>d1>>d2>>d3;

    int arr[d1][d2][d3];
    cout<<"\n\nEnter the elements : "<<endl;
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            for(int k=0;k<d3;k++)
            {
                cin>>arr[i][j][k];
            }
        }
    }
    cout<<"\n\nEntered elements are :"<<endl<<endl;
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {

            for(int k=0;k<d3;k++)
            {
                cout<<"\t"<<arr[i][j][k]<<"   ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }


}
