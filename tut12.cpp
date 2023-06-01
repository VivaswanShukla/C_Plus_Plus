#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* b = &a; //"&" Address of Operator
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;    // "*" (Value At) Dereference Operator
    // *****POINTR TO POINTER****
    int** c = &b;
    cout<<c<<endl;
    cout<<&b<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}