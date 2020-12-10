#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std ;

long deci_to_bin(int );
int bin_to_deci(long );

int main()
{
    int n,decimal;
    long binary;

    cout<<"\n\t'1' for decimal to binary conversion.\n";
    cout<<"\n\t'2' for binary to decimal conversion.\n";
    cout<<"\n\t'0' for terminating the program.\n";
    cout<<"\n\tEnter either '1' or '2' or '0' : ";
    cin>>n;
    if(n==1 || n==2)
    {
        system("CLS");
        if(n==1)
        {
            cout<<"\n\tEnter the number in decimal form : ";
            cin>>decimal;
            cout<<"\n\t\t    "<<decimal<<" = "<<deci_to_bin(decimal)<<endl;
            cout<<"\n-------------------------------------------------------"<<endl;
            main();
        }
        else
        {
            cout<<"\n\tEnter the number in binary form : ";
            cin>>binary;
            cout<<"\n\t\t    "<<binary<<" = "<<bin_to_deci(binary);
            cout<<"\n---------------------------------------------------------"<<endl;
            main();
        }
    }
    else if(n==0)
    {
        system("CLS");
        cout<<"\n\t\t--------THANK YOU For using the program.--------"<<endl;

        return 0;
    }
    else
    {
        system("CLS");
        cout<<"\n\t\t--------ERROR!!!Invalid Input .--------"<<endl;
        cout<<"\n-----------------------------------------------------------------"<<endl;
        main();
    }


}
long deci_to_bin(int decimal)
{
    long binary=0;
    int dec_dup,multiplier=1,remainder;
    dec_dup=decimal;
    while(dec_dup!=0)
    {
        remainder=dec_dup%2;
        binary+=remainder*multiplier;
        multiplier*=10;
        dec_dup/=2;
    }
    return binary;

}
int bin_to_deci(long binary)
{
    int last_digit,power=0,decimal=0;
    long dup_binary=binary;
    while(dup_binary!=0)
    {
        last_digit=dup_binary%10;
        decimal+=last_digit*(pow(2,power));
        power++;
        dup_binary/=10;
    }
    return decimal;
}
