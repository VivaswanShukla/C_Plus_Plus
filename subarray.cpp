#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            sum += arr[j];
            cout<<sum<<endl;
        }
    }
    // cout<<"The sum is: "<<sum<<endl;
    return 0;
}