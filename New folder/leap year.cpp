#include<iostream>
int main()
{
    int year,check;
    std::cout<<"Enter the year : ";
    std::cin>>year;
    check=year%100;
    if(check==0)
    {
        if((year%400)==0)
        {
            std::cout<<year<<" is a leap year.";
        }
        else
        {
            std::cout<<year<<" is not a leap year.";
        }
    }
    else
    {
        if((year%4)==0)
        {
            std::cout<<year<<" is a leap year.";
        }
        else
        {
            std::cout<<year<<" is not a leap year.";
        }
    }
}
