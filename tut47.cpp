#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 750;
    virtual void display() // Once declared virtual, it means that the the derived class dispaly() function will be called.
    {
        cout << "The value of var_base is: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_Derived = 1050;
    void display()
    {
        cout << "The value of var_base is: " << var_base << endl;
        cout << "The value of var_Derived is: " << var_Derived << endl;
    }
};

int main()
{
    Base * base_class_pointer;
    Base obj_base;

    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); /* By default it will call the display() function of base class only.
    But if we want to call the derived class function then we use virtual fucntion
    */
    return 0;
}