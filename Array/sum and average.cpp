#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of input : ";
    cin>>n;
    float arr[n],sum=0,average=0;
    cout<<"\n\nEnter the elements : "<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element no."<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\n\nEntered elements are :"<<endl;
    for(const int &num : arr)
    {
        cout<<num<<"\t";
        sum+=num;
    }
    cout<<"\n\nThe sum of the elements is "<<sum;
    cout<<"\n\nThe average is "<<sum/n;


}
