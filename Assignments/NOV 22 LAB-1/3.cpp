#include<iostream>

using namespace std;

class User{
    char name[20];
public :
    void getUser(){
    cout<<"\nEnter the User-Name : ";
    cin.get(name,20);
    }
    void displayUser(){
        cout<<"\nUser-Name = "<<name;
    }
};
int main()
{
    User user1;
    user1.getUser();
    user1.displayUser();
}
