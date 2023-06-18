#include<iostream>
using namespace std;

class Number{
    int a, b;
    public:
        // Number(int x, int y) : a(y), b(x)
        // Number(int x, int y) : a(x + y), b(y-x)
        // Number(int x, int y) : a(x ), b(2 * (x-1))
        Number(int x, int y) : a(x), b(x +y)
        {
            cout<<"The value of a is"<<endl<<a<<endl<<"The value of b is: "<<endl<<b<<endl;
        }
};

int main()
{
    Number n(10, 20);
    return 0;
}