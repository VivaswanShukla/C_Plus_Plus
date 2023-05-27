// Taking input from the user in C++
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the first number: \n"; // "<<" is called Insertion Operator
    cin>>num1; // ">> is called Extraction Operator"

    cout<<"Enter the second number: \n";
    cin>>num2;
    cout<<"The sum of the number is: \n"<<num1+num2;
    return 0;
}
