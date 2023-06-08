#include<iostream>
#include<math.h>
using namespace std;

class sqrtt
{
    double x1;
    double y1;
    double x2;
    double y2;
    public:
        sqrtt(double, double , double , double);
};
sqrtt :: sqrtt(double a, double b, double c, double d)
{
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
    cout<<"The points are: A("<<x1<<","<<y1<<")"<<endl;
    cout<<"The points are: B("<<x2<<","<<y2<<")"<<endl;
    double x = ((x2-x1)*(x2-x1));
    double y = ((y2-y1)* (y2-y1)); 
    double res = sqrt(x+y);
    cout<<"The distance between the two points is: "<<res<<endl;

}
int main()
{
    sqrtt s(1, 2, 7, 5);
    return 0;
}