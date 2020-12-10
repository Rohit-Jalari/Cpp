#include <iostream>
using namespace std;
class BankAccount{

		char AccountHolderName[100];
		char AccountType[100];
		int AccountNumber;
		long int Balance;
	public:
		void BankDetails();
		void BankDeposit();
		void Display();
		void Withdraw();

};
void BankAccount::BankDetails(){
			cout<<"enter account holder's name\t";
			cin>>AccountHolderName;
			cout<<"\n enter account holder's account type";
			cin>>AccountType;
			cout<<"\n enter account holder's account number\t";
			cin>>AccountNumber;
			cout<<"\n enter account holder's bank balance\t";
			cin>>Balance;
};
void BankAccount::BankDeposit(){
		int depoamt;
        cout<<"\n Enter Deposit Amount = ";
        cin>>depoamt;
        Balance+=depoamt;
		};
void BankAccount::Withdraw(){
		int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1<Balance)
            Balance-=wamt1;

};

void BankAccount::Display(){
	    cout<<"\n Accout No. : "<<AccountNumber;
        cout<<"\n Name : "<<AccountHolderName;
        cout<<"\n Account Type : "<<AccountType;
        cout<<"\n Balance : "<<Balance;

};

int main()
 {
 	BankAccount NewUser;
 	NewUser.BankDetails();
    NewUser.BankDeposit();
    NewUser.Withdraw();
    NewUser.Display();
	return 0;
};
