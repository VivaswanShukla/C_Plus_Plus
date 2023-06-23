#include <iostream>
using namespace std;

template<class T>

class Prod
{
public:
    T a;
    T b;
    T c;
    T d;
    Prod(T x, T y)
    {
        a = x;
        b = y;
    }
    T product(Prod &p)
    {
         c = this->a * (p.a);
         d = this->b * (p.b);
        return c + d;
    }
    // void show()
    // {
    //     cout<<"The  values are: "<<c<<endl<<d<<endl;
    // }
};

int main()
{
    // Prod pro(5, 6);
    // Prod pro1(2, 8);
    // Prod pro(5.7, 6.2);
    // Prod pro1(2.5, 8.1);
    // T k = pro.product(pro1);
    // pro.show();
    // cout << k << endl;
    Prod <float> p(5.21, 6.89);
    Prod <float> p1(7.20, 6.52);
    Prod <int> p2(5, 6);
    Prod <int> p3(7, 8);
    float k = p.product(p1);
    cout<<k<<endl;
    float l = p2.product(p3);
    cout<<l<<endl;
    return 0;
}