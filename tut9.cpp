#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x = 21;
    cout<<"The value of x is: "<< x << endl;
    x = 45; // The value of a gets changed.....
    cout<<"The value of x is: "<< x << endl;
    


    // *****In Order to keep a variable's value unchanged we use "const" keyword.....for example
    // const a = 45;
    // cout<<"The value of a is: "<< a << endl;

    // a = 23;
    // cout<<"The value of a is: " << a << endl; // Error occurs......


    // **********************MANIPULATORS**************
    int p = 4, q = 45, r = 31;
    cout<<"The value of p is:" << p << endl;
    cout<<"The value of q is:" << q << endl;
    cout<<"The value of r is:" << r << endl;

    cout<<"The value of p is:" << setw(4)<< p << endl;
    cout<<"The value of q is:" <<setw(4) << q << endl;
    cout<<"The value of r is:" <<setw(4) << r << endl;


    return 0;
}
