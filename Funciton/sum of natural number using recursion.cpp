#include<iostream>
using namespace std;
int dosum(int n)
{
    if(n>1)
    {
        return n+dosum(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,sum;

    cout<<"Enter the number : ";
    cin>>n;

    sum=dosum(n);

    cout<<"\nThe sum of first "<<n<<" natural numbers is "<<sum<<".";

}
