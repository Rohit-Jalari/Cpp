#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements you want to store in the Array : ";
    cin>>n;
    int arr[n];
    cout<<"\n\nEnter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element no."<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\n\nThe elements of the array are : "<<endl;
    for(const int &num : arr)
    {
        cout<<num<<"\t";
    }
}
