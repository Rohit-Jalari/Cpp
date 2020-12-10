#include<iostream>

using namespace std;

class Laptop{
    string brand_name;
    string model;
    int price;
public :
    void getData()
    {
        cout<<"\nEnter the Name of the Brand : ";
        getline(cin,brand_name);
        cout<<"\nEnter the Model Name : ";
        getline(cin,model);
        cout<<"\nEnter the Price : ";
        cin>>price;
    }
    void displayData()
    {
        cout<<"\n\tBrand Name : "<<brand_name;
        cout<<"\n\tModel Name : "<<model;
        cout<<"\n\tPrice      : "<<price;
    }
};
 int main()
 {
     Laptop laptop1;
     laptop1.getData();
     laptop1.displayData();
 }
