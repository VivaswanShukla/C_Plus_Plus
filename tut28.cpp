#include<iostream>
using namespace std;
// Constructor is the same as the class name
// It is used to initialise the objects of the class. 
// It is automatically invoked when the object of the class is created.
// They cannnot return values and do not have a return type

class Complex
{
    int a;
    int b;
    public: 
        Complex(); // Default constructor--> It is a constructor which takes no arguments
        void printData()
    {
        cout << "The number is: " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex()
{
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;
}
int main()
{
    Complex c1;
    c1.printData();
    return 0;
}