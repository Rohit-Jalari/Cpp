#include<iostream>
using namespace std;
int main()
{
    int n,largest=0;

    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements : "<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element no."<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                largest=arr[j];
            }
            else
            if(arr[k]>arr[j])
            {
                largest=arr[k];
            }
            else
            {
                continue;
            }
        }

    }
    cout<<"The largest element in the array is "<<largest<<".";



}

