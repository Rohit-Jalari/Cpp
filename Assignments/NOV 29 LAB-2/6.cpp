#include<iostream>

using namespace std;

class Sum{
    int lower_range;
    int upper_range;
public:
    void getData(int a,int b)
    {
        if(a>b)
        {
            lower_range=b;
            upper_range=a;
        }else{
        lower_range=a;
        upper_range=b;
        }
    }
    int natural_sum()
    {
        return upper_range*((upper_range+1)/2.0);
    }
    int even_sum()
    {
        return (upper_range/2.0)*((upper_range/2.0)+1);
    }
    void odd_sum()
    {
        cout<<"\tSum of all Odd Numbers between "<<lower_range<<" and "<<upper_range<<
        " is "<<natural_sum()-even_sum()<<endl;
    }
};

int main()
{
    Sum sum1;
    sum1.getData(1,100);
    sum1.odd_sum();
}
