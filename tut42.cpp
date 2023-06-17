#include <iostream>
using namespace std;

// **                            USING CONSTUCTORS IN INHERITANCE

class Base1
{
    int data1;

public:
    Base1(int x)
    {
        data1 = x;
        cout << "Base1 constructor called" << endl;
    }
    void prinData()
    {
        cout << "The value is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int x)
    {
        data2 = x;
        cout << "Base constructor called: " << endl;
    }
    void printDataBase2()
    {
        cout << "The value of base2 variable is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;
    public: 
        Derived(int x, int y, int z, int s) : Base1(x), Base2(y){
            derived1 = z;
            derived2 = s;
            cout<<"Derived class contructor called"<<endl;
        }
        void PrintDerived()
        {
            cout<<"The values of derived class variables are: "<<derived1<<endl
                <<derived2<<endl;
        }
};

int main()
{
    Derived viv(10, 20, 30, 40);
    viv.prinData();
    viv.printDataBase2();
    viv.PrintDerived();
    return 0;
}