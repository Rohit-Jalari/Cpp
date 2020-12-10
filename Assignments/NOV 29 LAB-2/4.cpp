#include<iostream>

using namespace std;

class Laptop{
public:
    string brand_name;
    string model;
    int price;
};
int main(){
    Laptop laptop1;
    Laptop laptop2;

    laptop1.brand_name="Acer";
    laptop1.model="Nitro 5";
    laptop1.price=110000;

    laptop2.brand_name="Dell";
    laptop2.model="Inspiron 15 3593";
    laptop2.price=89990;

    cout<<"Brand Name : "<<laptop1.brand_name<<endl;
    cout<<"Model No.  : "<<laptop1.model<<endl;
    cout<<"Price      : "<<laptop1.price<<endl;

    cout<<"\nBrand Name : "<<laptop2.brand_name<<endl;
    cout<<"Model No.  : "<<laptop2.model<<endl;
    cout<<"Price      : "<<laptop2.price<<endl;


}
