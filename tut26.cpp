#include<iostream>
using namespace std;
class Y;
class X
{
    int a;
    public:
        void getValue(int value)
        {
            a = value;
        }
        friend void addSum(X , Y );
};

class Y
{
    int b;
    public:
        void getValue(int value)
        {
            b = value;
        }
        friend void addSum(X , Y );
};

void addSum(X o1, Y o2)
{
    cout<<"The sum of the values is: "<<o1.a + o2.b<<endl;
}


int main()
{
    X x;
    Y y;
    x.getValue(5);
    y.getValue(5);
    addSum(x, y);
    return 0;
}