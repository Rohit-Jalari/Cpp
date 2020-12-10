// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
   private:
    int a = 1;

   protected:
    int b = 2;

   public:
    int c = 3;

    // function to access private member
    int get_a() {
        return a;
    }
};

class Child : public Base {
   public:
    // function to access protected member from Base
    int get_b() {
        return b;
    }
};

int main() {
    Child c1;
    cout << "Private = " <<c1.get_a() << endl;
    cout << "Protected = " <<c1.get_b() << endl;
    cout << "Public = " <<c1.c << endl;
    return 0;
}
