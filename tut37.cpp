#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public:
    int c;
    void setData()
    {
        a = 10;
        b = 40;
        c = 20;
    }
    int getDataC()
    {
        return b;
    }
    int getDataD()
    {
        return c;
    }
};

class Derived : public Base
{
    int e;

public:
    void getDataE()
    {
        e = a * c;
    }
    void display()
    {
        cout << "The value of e is: " << e << endl;
        cout << "The product of c and d is: " << getDataC() * getDataD() << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    d.setData();
    d.getDataE();
    d.display();
    return 0;
}