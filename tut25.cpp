#include<iostream>
using namespace std;
class complex;
class calculator
{
    public:
        int add(int a, int b)
    {
        return (a+b);
    }
        int addRealSum(complex, complex);
        int addCompSum(complex, complex);
};

class complex
{
    int a; 
    int b;
    public:
    // Individually declaring friend functions
    // friend int calculator :: addRealSum(complex o1, complex o2);
    // friend int calculator :: addCompSum(complex o1, complex o2);

    // Declaring the whole class as friend
    friend class calculator;
        void setData(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void printData()
        {
            cout<<"The number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
int calculator :: addRealSum(complex o1, complex o2)
{
    int sumr = o1.a + o2.a;
    return sumr;
}
int calculator :: addCompSum(complex o1, complex o2)
{
    int sumc = o1.b + o2.b;
    return sumc;
}

int main()
{
    complex c1, c2;
    c1.setData(3, 4);
    c1.printData();

    c2.setData(5, 6);
    c2.printData();

    calculator calc;
    int res = calc.addRealSum(c1, c2);
    int resc = calc.addCompSum(c1, c2);

    cout<<"The sum of the real part is: "<<res<<endl;
    cout<<"The sum of the complex part is: "<<resc<<endl;

    return 0;
}