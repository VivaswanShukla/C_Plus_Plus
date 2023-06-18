//  Pointers ................    New and delete keywords...
#include<iostream>
using namespace std;

int main()
{
    int a = 89;
    int* ptr = &a;
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1)= 20;
    arr[2] = 30;
    delete[] arr;
    cout<<"The address of a is: "<<ptr<<endl;
    cout<<"The vlaue of a is: "<<*ptr<<endl;
    cout<<"The vlaue of arr[0] is: "<<arr[0]<<endl;
    cout<<"The vlaue of arr[1] is: "<<arr[1]<<endl;
    cout<<"The vlaue of arr[2] is: "<<arr[2]<<endl;
    return 0;
}