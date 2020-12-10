#include<iostream>
using namespace std;
int checkprime(int);
int main()
{
    int n,check=0;

    cout<<"Enter the number : ";
    cin>>n;


    for(int i=2;i<=n/2;i++)
    {
        if(checkprime(i))
        {
            if(checkprime(n-i))
            {
                check=1;
                cout<<"\nYES!!!The number can expressed in terms of addition of two prime numbers .";
                cout<<"\n\n\t\t"<<i<<"  +  "<<n-i<<"  =  "<<n;
                break;
            }
        }
    }
    if(check==0)
    {
        cout<<"\nNO!!!The number cannot be expressed in terms of addition of two prime numbers .\n";
    }
}

int checkprime(int n)
    {
        int isprime=1;
        if(n==0 || n==1)
        {
            isprime=0;
        }
        else
        {
            for(int j=2;j<=n/2;j++)
            {
                if(n%j==0)
                {
                    isprime=0;
                    break;
                }
            }
        }
        return isprime;
    }

