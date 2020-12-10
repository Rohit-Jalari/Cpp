#include<iostream>

using namespace std;

class Teacher{

public :
    void printText1();
    void printText2();
    void printValue(int a);
};
void Teacher::printText1(){
    cout<<"\n\tThis is Text No.1.";
}
void Teacher::printText2(){
    cout<<"\n\tThis is Text No.2.";
}
void Teacher::printValue(int a){
    cout<<"\n\tThe Entered Number is "<<a<<".";
}

int main()
{
    Teacher teacher1;
     int num;
     cout<<"\nEnter a number : ";
     cin>>num;

     teacher1.printText1();
     teacher1.printText2();
     teacher1.printValue(num);
}
