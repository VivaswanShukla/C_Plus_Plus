#include<iostream>
using namespace std;

void swapPointer(int* a , int* b)
{
    int temp = *a;
    *a =*b;
    *b = temp;
}

void swapRefVar(int &a, int &b)
{
    int temp = a;
    a =b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;

    swapRefVar(x,y);
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
    return 0;
}