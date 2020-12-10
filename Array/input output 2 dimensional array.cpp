#include<iostream>
using namespace std;
int main()
{
    int rows,column;

    cout<<"Enter the total number of rows : ";
    cin>>rows;
    cout<<"\nEnter the total number of column : ";
    cin>>column;

    int arr[rows][column];

    cout<<"\nEnter the elements : "<<endl<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"\n\nEntered elements are : "<<endl<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
        cout<<endl;
    }


}
