#include<iostream>
using namespace std;

template<class t1 = int, class t2 = float, class t3 = char>

class shukla{
    public:
    t1 a;
    t2 b;
    t3 c;
    shukla(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
    }
};

int main()
{
    shukla <> sh(10, 21.77, 'S');
    sh.display();
    cout<<endl;
    shukla <char, string, int> sh1('S', "Vivaswan Shukla", 99);
    sh1.display();
    return 0;
}