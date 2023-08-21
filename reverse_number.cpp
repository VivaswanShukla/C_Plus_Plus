#include<iostream>
using namespace std;

int main()
{
    int digit;
    cin>>digit;
    int reverse = 0;
    while(digit > 0)
    {
        int n = digit % 10;
        reverse = reverse * 10 + n;
        digit = digit/10;
    }
    cout<<reverse;
    return 0;
}