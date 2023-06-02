#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    float avg;
    int marks[5] = {10, 10, 9, 8, 7};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Enter the marks of student "<<i+1<<":"<<endl;
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     sum = sum + marks[i];   
    // }
    // avg = (sum/5);
    // cout<<"The average marks is: "<<avg<<endl;

    // Arrays and Pointers
    int* p = marks;
    // cout<<"The value of marks[0] is: " <<*p<<endl;
    // cout<<"The value of marks[1] is: " <<*(p+1)<<endl;
    // cout<<"The value of marks[2] is: " <<*(p+2)<<endl;
    // cout<<"The value of marks[3] is: " <<*(p+3)<<endl;
    // cout<<"The value of marks[4] is: " <<*(p+4)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<*p<<endl;
        *p++;
    }
    
    return 0;
}