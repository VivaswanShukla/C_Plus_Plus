#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        friend complex sumComplex(complex o1, complex o2);
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void getData()
        {
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(3, 4);
    c1.getData();

    c2.setData(3, 4);
    c2.getData();

    sum = sumComplex(c1, c2);
    sum.getData();
    return 0;
}