#include<iostream>

using namespace std;

int factorial(int num)
{
    if(num!=1)
    {
        return num*(num-1);
    }
    return 1;
}
int main()
{
    int num;
    cout<<"\nEnter the number : ";
    cin>>num;
    cout<<"\nThe factorial of "<<num<<" is "<<factorial(num);

}
