#include<iostream>
int main()
{
    int num,sum;
    std::cout<<"Enter the number : ";
    std::cin>>num;
    sum=(num*(num+1))/2.0;
    std::cout<<"\nThe sum of first "<<num<<" natural numbers is "<<sum<<".";
}
