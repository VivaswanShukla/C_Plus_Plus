#include<iostream>
using namespace std;

int c = 12;
int main()
{
    // int a,b,c;

    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;

    // cout<<"Enter the vlaue of b: "<< endl;
    // cin>>b;

    // c = a + b;
    // cout<<"The sum of a and b is: "<<c<<endl;

    // // To access a global variable we use "::" which is caleed scope resolution operator
    // cout<<"The value of global c is: "<<::c;
    // return 0;

    //****************REFERENCE VARIABLES***************
    int x = 10;
    int &y = x;
    int &z = x;

    cout<<x<<endl<<y<<endl<<z<<endl;


    //***************TYPECASTING*****************

    int a = 10;
    float b = 67.9;
    cout<<(a+b)<<endl;
    cout<< a + int(b)<<endl;
    cout<< float(a) + b;
    
    return 0;
}
