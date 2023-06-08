#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    public: 
        Complex(int, int); 
        void printData()
    {
        cout << "The number is: " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(int a, int b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    // Implicit call
    Complex c(5, 7);
    c.printData();
    // Explicit call
    Complex c2 = Complex(6, 8);
    c2.printData();
    return 0;
}