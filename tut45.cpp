#include<iostream>
using namespace std;

class Number{
    int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void getData()
        {
            cout<<"The real part is: "<<a<<endl
                <<"The imaginary part is: "<<b<<endl;
        }
};

int main()
{
    Number *c1 = new Number;
    // (*c1).setData(4, 6);
    // (*c1).getData();
    c1->setData(7, 8);
    c1->getData();
    return 0;
}