#include<iostream>
#include<math.h>
using namespace std;

class Simple
{
    int a, b;
    public: 
        void setData(int x, int y)
        {
            a = x;
            b = y; 
        }
        int sum()
        {
            cout<<"The sum of the two numbers is: "<<endl;
            return a + b;
        }
        int minus()
        {
            cout<<"The subtraction of the two numbers is: "<<endl;
            return  a - b;
        }
        int mult()
        {
            cout<<"The product of the two numbers is: "<<endl;
            return a * b;
        }
        float div()
        {
            cout<<"The division of the two numbers is: "<<endl;
            return float(a)/b;
        }
};

class Scientific
{
    int c;
    float sqroot, cbroot;
    public:
        void setData2(int a)
        {
            c = a;
        }
        int cube()
        {
            cout<<"The cube of the number is: "<<endl;
            return c * c* c;
        }
        int square()
        {
            cout<<"The square of the number is: "<<endl;
            return c * c;
        }
        float squareRoot()
        {
            cout<<"The square root of the number is: "<<endl;
            sqroot = sqrt(c);
            return sqroot;
        }
        float cuberoot()
        {
            cout<<"The cube root of the number is: "<<endl;
            cbroot = cbrt(c);
            return cbroot;
        }
};

class Hybrid : public Simple, public Scientific{
    public:
        void display()
        {
            cout<<sum()<<endl;
            cout<<minus()<<endl;
            cout<<mult()<<endl;
            cout<<div()<<endl;
        }
        void displaysc()
        {
            cout<<cube()<<endl;
            cout<<square()<<endl;
            cout<<squareRoot()<<endl;
            cout<<cuberoot()<<endl;
        }
};

int main()
{
    Hybrid h1;
    // h1.setData(10, 7);
    // h1.display();
    h1.setData2(12);
    h1.displaysc();
    return 0;
}