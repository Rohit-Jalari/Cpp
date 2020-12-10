#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Account{
    string Account_name;
    string Account_type;
    unsigned int Account_number;
    unsigned int Account_balance;

public :
    void GetDetail()
    {
        cout<<"\nEnter the Name of Account Holder : ";
        getline(cin,Account_name);
        cout<<"\nEnter the type of the Account : ";
        getline(cin,Account_type);
        cout<<"\nEnter the Account Number : ";
        cin>>Account_number;
        cout<<"\nEnter the Balance of the Account : ";
        cin>>Account_balance;
    }
    void DisplayData()
    {
        cout<<"\n\tAccount Name   : "<<Account_name<<endl;
        cout<<"\n\tAccount Number : "<<Account_number<<endl;
        cout<<"\n\tAccount Type   : "<<Account_type<<endl;
    }

    void GetData(int n)
    {
        system("CLS");



        if(n==1)
        {
            unsigned int deposite;
            cout<<"\nCurrent Balance : "<<Account_balance<<endl;
            cout<<"\nEnter the Amount you want to Deposite : ";
            cin>>deposite;
            cout<<"\n-------------------------------------------";
            DisplayData();
            Account_balance+=deposite;
            cout<<"\nAmount Deposited      : "<<deposite;
            cout<<"\nAmount after Deposite : "<<Account_balance<<endl;
            cout<<"\n-------------------------------------------";

        }
        else if(n==2)
        {
            unsigned int withdraw;
            cout<<"\nCurrent Balance : "<<Account_balance<<endl;
            cout<<"\nEnter the Amount you want to Withdraw : ";
            cin>>withdraw;
            cout<<"\n-------------------------------------------";
            DisplayData();
            if((Account_balance)<withdarw)
            {
                cout<<"\nTransaction Error!!!Insufficient Balance."<<endl;
            }
            else
            {
            Account_balance-=withdraw;
            cout<<"\nAmount Withdrawn       : "<<withdraw;
            cout<<"\nAmount after Withdrawl : "<<Account_balance<<endl;
            cout<<"\n-------------------------------------------";
            }
        }
        else if(n==0)
        {
            exit(1);
        }
        else
        {
            cout<<"\nERROR!!!Invalid Input."<<endl;
        }
    }
};

int main()
{
    Account acc1;
    int n;
    acc1.GetDetail();
    cout<<"\n' 1 ' to Deposite Amount ."<<endl;
    cout<<"\n' 2 ' to Withdraw Amount ."<<endl;
    cout<<"\nEnter either ' 1 ' or ' 2 ' : ";
    cin>>n;

    acc1.GetData(n);
}
