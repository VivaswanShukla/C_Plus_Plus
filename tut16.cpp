#include<iostream>
using namespace std;
// *******INline Function reduces the overhead......or reduces the time and cost of a program
inline int product(int x, int y)
{
    return x*y;
}

float interest(int amt, const float rate = 2.6)//*********HERE FLOAT RATE IS DEFAULT ARG******
{
    return amt*rate;
}

int main()
{
    int a, b;
    // cout<<"Enter the value of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is: "<<product(a, b)<<endl;

    const int money = 100000;
    // money = 20;
    cout<<"Money received with interest is: "<<interest(money)<<endl;
    cout<<"Money received with interest for premium members is: "<<interest(money, 3)<<endl;
    return 0;
}