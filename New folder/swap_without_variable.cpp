#include<iostream>

int main()
{
    int a,b;
    std::cout<<"Enter 1st number :";
    std::cin>>a;
    std::cout<<"Enter 2nd number :";
    std::cin>>b;

    std::cout<<"Before swapping, 1st number : "<<a<<",2nd number : "<<b;

    a=a+b ;
    b=a-b;
    a=a-b;

    std::cout<<"\nAfter swapping, 1st number : "<<a<<", 2nd number : "<<b;

    return 0;
}

