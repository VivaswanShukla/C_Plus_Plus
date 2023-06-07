#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;
    static int j;

public:
    void setData()
    {
        cout << "Enter the id and name of the employee " << j + 1 << ":" << endl;
        cin >> id >> name;
        j++;
    }
    void getData()
    {
        cout << "The id and name of the employee is: " << id << "     " << name << endl;
    }
};
int employee ::j;

int main()
{
    employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        emp[i].setData();
        emp[i].getData();
    }
    return 0;
}