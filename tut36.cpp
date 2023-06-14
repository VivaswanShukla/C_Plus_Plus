#include <iostream>
using namespace std;
// Base Class
class Employee
{
public:
    int id;
    int salary;
    string name;

    Employee() {}
    Employee(int inpId, int sal, string nm)
    {
        id = inpId;
        salary = sal;
        name = nm;
    }
    void show()
    {
        cout << "The id , salary and name of the employee is: " << id << endl
             << salary << endl
             << name << endl;
    }
};

class Programmer : public Employee
{
    int skillLvl;

public:
    Programmer() {}
    Programmer(int inpskill, int inpid, int sal, string nm)
    {
        skillLvl = inpskill;
        id = inpid;
        salary = sal;
        name = nm;
    }
        void show1()
        {
            cout << "The id , salary and name of the employee is: " << id << endl
                 << salary << endl
                 << name << endl;
            cout << "The skill level is: " << skillLvl << endl;
        }
};

int main()
{
    // Employee Viv, Yash, Kush;
    // Viv = Employee(101, 400000.0, "Vivaswan Shukla");
    // Viv.show();
    // Yash = Employee(101, 240000.0, "Yash Raj Singh");
    // Yash.show();
    // Kush = Employee(101, 30000.0, "Kushagra Pandey");
    // Kush.show();
    Programmer pg1, pg2, pg3;
    pg1 = Programmer(9, 101, 400000000, "Vivaswan Shukla");
    pg1.show1();
    pg2 = Programmer(8, 101, 200000000, "Yash Raj Singh");
    pg2.show1();
    pg3 = Programmer(7, 101, 4000000, "Kushagra Pandey");
    pg3.show1();
    return 0;
}