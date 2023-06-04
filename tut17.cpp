#include<iostream>
using namespace std;
// *****Recursion******
int fact(int n)
{
    if(n <=1)
        return 1;
    
    return n*fact(n-1);
}

int main()
{
    int n;
    // int t1 = 0, t2 = 1, nextTerm = 0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i == 1)
    //     {
    //         cout<<t1<<endl;
    //         continue;
    //     }
    //     if(i == 2)
    //     {
    //         cout<<t2<<endl;
    //         continue;
    //     }
    //     nextTerm = t1 + t2;
    //     t1 = t2;
    //     t2 = nextTerm;
    //     cout<<nextTerm<<endl;
    // }
    cout<<"The factorial of "<<n<<" is: "<<fact(n);
    
    return 0;
}