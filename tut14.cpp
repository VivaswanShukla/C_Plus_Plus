#include<iostream>
using namespace std;
typedef struct player
{
    int age;
    float salary;
    int id;
    string lastName;
}pl;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<< lunch<<endl;
    cout<< dinner<<endl;
    
    pl Vivaswan;
    pl Yash;
    Vivaswan.age = 20;
    Vivaswan.id = 1121;
    Vivaswan.lastName = "Shukla";
    Vivaswan.salary = 23000000;

    Yash.salary = 23000000;
    Yash.age = 20;
    Yash.lastName = "RAJ Singh";
    Yash.id = 1122;

    cout<<Vivaswan.age<<endl;
    cout<<Vivaswan.salary<<endl;
    cout<<Vivaswan.id<<endl;
    cout<<Vivaswan.lastName<<endl;

    cout<<Yash.lastName<<endl;
    cout<<Yash.id<<endl;
    cout<<Yash.salary<<endl;
    cout<<Yash.age<<endl;

    union money mon;
    mon.car = 'l';
    mon.rice = 20;

    cout<<mon.rice<<endl;
    return 0;
}