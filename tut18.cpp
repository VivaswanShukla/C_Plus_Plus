#include<iostream>
using namespace std;

class employee
{
private:
    int a, b, c;
public:
    int d, e;
    void setData(int a, int b, int c);
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
};

void employee :: setData(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
}

int main()
{
    employee Vivaswan;
    Vivaswan.d = 10;
    Vivaswan.e = 20;
    Vivaswan.setData(5, 6, 7);
    Vivaswan.getData();
    return 0;
}