#include<iostream>
using namespace std;
class c2;

class c1
{
    int x;
    public:
        void setData(int value)
        {
            x = value;
        }
        friend void exchange(c1 &, c2 &);
};

class c2
{
    int y;
    public:
        void setData(int value)
        {
            y = value;
        }
        friend void exchange(c1 &, c2 &);
};

void exchange(c1 &a, c2 &b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout<<"The new value of a is: "<<a.x<<endl;
    cout<<"The new value of b is: "<<b.y<<endl;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.setData(5);
    o2.setData(7);
    exchange(o1, o2);
    return 0;
}