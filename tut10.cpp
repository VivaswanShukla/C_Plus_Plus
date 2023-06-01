#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cout<<"Enter the number: \n";
    cin>>x;
    switch (x)
    {
        case 1:
        cout<<"January";
        break;
        case 2:
        cout<<"Feb";
        break;
        case 3:
        cout<<"March";
        break;
        default:
        cout<<"INVALID OUTPUT";
        break;
    }
    return 0;
}
