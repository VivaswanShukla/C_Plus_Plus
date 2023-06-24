#include<iostream>
using namespace std;

template<class T1>


// float average(T1 a, T1 b ,  T3 c)
// {
//     float d = (a + b + c)/3;
//     return d;
// }

void sswap(T1 a, T1 b, T1 temp = 0)
{
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"The swapped value of a is: "<<a<<endl;
    cout<<"The swapped value of b is: "<<b<<endl;
}

int main()
{
    // float x;
    // x = average(10, 21, 12.50);
    // cout<<x<<endl;
    sswap(10, 20);
    return 0;
}