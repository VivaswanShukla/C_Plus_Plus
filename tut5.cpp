#include<iostream>
using namespace std;
int main()
{
    int fact = 1;
    for (int i = 1; i <= 10; i++)
    {
        fact = fact *i;
    }
    cout<<fact;
    return 0;
}
