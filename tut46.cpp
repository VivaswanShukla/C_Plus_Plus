#include<iostream>
using namespace std;

class Base{
    public:
        int var_base;
        void display()
        {
            cout<<"The value of var_base is: "<<var_base<<endl;
        }
};

class Derived : public Base{
    public:
        int var_Derived;
        void display()
        {
            cout<<"The value of var_base is: "<<var_base<<endl;
            cout<<"The value of var_Derived is: "<<var_Derived<<endl;
        }
};

int main()
{
    Base * base_pointer; // Creating a pointer of Base class
    Base obj_base;

    // Derived* derived_pointer;
    Derived obj_derived;
    base_pointer = &obj_derived; // Base class pointer pointing to derived class object. 
    base_pointer->var_base = 700;
    // base_pointer->var_derived = 800;// Note-- Base Pointer cannot set the value for derived class variables.
    base_pointer->display();// It will only call Base class display() function.

    Derived * derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_base = 750;
    derived_pointer->var_Derived = 1050;
    derived_pointer->display();
    return 0;
}