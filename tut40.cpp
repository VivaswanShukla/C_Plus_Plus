#include<iostream>
using namespace std;
//  *****                       AMBIGUITY RESOLUTION IN C++
class Base1{
    public: 
        void greet()
        {
            cout<<"Hello"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout<<"Namaste"<<endl;
        }
};

class Derived : public Base1, public Base2{
    public: 
        void greet()
        {
            Base2 ::greet();
        }
};

int main()
{
    // Base1 b1;
    // b1.greet();
    // Base2 b2;
    // b2.greet();
    Derived d;
    d.greet();
    return 0;
}