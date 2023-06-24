#include<iostream>
using namespace std;

// ***        Template function overloading 

template<class T>
class Vivaswan{
    public:
        T data;
        Vivaswan(T a)
        {
            data = a;
        }
        void display();
};

template<class T>
void Vivaswan<T> ::display()
{
    cout<<"The value of data is: "<<data<<endl;
}

void func(int a)
{
    cout<<"Hellio"<<endl;
    cout<<"A is: "<<a<<endl;
}

template<class T>
void func(T b)
{
    cout<<"B is: "<<b<<endl;
}

int main()
{
    // Vivaswan <int> v(10);
    // v.display();
    func(10); // Highest priority function gets called....that is func(int a)
    return 0;
}