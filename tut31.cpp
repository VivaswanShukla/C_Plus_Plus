#include <iostream>
using namespace std;
// ***CONSTRUCTOR OVERLOADING***********
class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 10;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printData()
    {
        cout << "The number is: " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1;
    c1.printData();
    complex c2(5, 6);
    c2.printData();
    complex c3(8);
    c3.printData();
    return 0;
}