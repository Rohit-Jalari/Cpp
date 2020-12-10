#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,34};
    cout<<"Printing the elements of array by Range-based for loop :"<<endl ;
    //ranged based for loop
    for(const int &num : arr)
    {
        cout<<num<<"\t";
    }
    cout<<"\n\n\nPrinting the elements of array by traditional for loop :"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
