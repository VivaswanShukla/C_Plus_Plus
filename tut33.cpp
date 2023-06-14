#include <iostream>
#include <math.h>
using namespace std;

class ci
{
    int p, n, t;
    float r;
    float x;
    float y;
    float k;

public:
    ci(){};
    ci(int a, float q, int b, int s);
    void show();
};
ci ::ci(int a, float q, int b, int s)
{

    p = a;
    r = q;
    n = b;
    t = s;
    float x = (1 + float(r / n));
    cout << "x is: " << x << endl;
    float y = pow(x, n * t);
    cout << "y is:" << y << endl;
    float final = p * y;
    k = final;
    cout << "final is: " << k << endl;
}
void ci ::show()
{
    cout << "The principal amount was: " << p << endl;
    cout << "The final amount is: " << k << endl;
}

int main()
{
    ci c1, c2, c3;
    int f, h, i;
    float g;
    cout << "Enter the principal: " << endl;
    cin >> f;
    cout << "Enter the rate of interest: " << endl;
    cin >> g;
    cout << "Enter the value of n: " << endl;
    cin >> h;
    cout << "Enter the time duration in years: " << endl;
    cin >> i;
    c1 = ci(f, g, h, i);
    c1.show();
    return 0;
}