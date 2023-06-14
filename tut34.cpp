#include<iostream>
using namespace std;
// **     COPY CONSTRUCTORS          ******
class Number
{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num)
        {
            a = num;
        }
        // **      If any copy constructor is not made by the user then the compiler makes one by itself;
        Number(Number &obj)
        {
            cout<<"COPY CONSTRUCTOR CALLED"<<endl;
            a = obj.a;
        }
        void show(){
            cout<<"Th number is : "<<a<<endl;
        }
};

int main()
{
    Number n1, n2, n3(45), n5;
    n1.show();
    n2.show();
    n3.show();

    Number n4(n3); // ** COPY CONSTRUCTOR INVOKED
    n4.show();

    n5 = n3;          //** COPY CONSTRUCTOR WILL NOT BE INVOKED AS N5 IS ALREADY DEFINED AS AN OBJECT
    Number s = n3; // ** COPY CONSTRUCTOR INVOKED
    return 0;
}