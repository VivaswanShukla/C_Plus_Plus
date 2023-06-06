#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; //***DEFAULT VALUE OF A STATIC VARIABLE IS 0....
public:
    void setId();
    void getId();
    static void getCOunt()
    {
        cout << "The value of count is: " << count << endl;
    }
} e, e1, e2;

int employee ::count;
void employee::setId()
{
    cout << "Enter the ID of the employee: " << endl;
    cin >> id;
    count++;
}

void employee ::getId()
{
    cout << "The id of employee " << count << " is: " << id << endl;
}

int main()
{
    e.setId();
    e.getId();
    employee::getCOunt();

    e1.setId();
    e1.getId();
    employee::getCOunt();

    e2.setId();
    e2.getId();
    employee::getCOunt();
    return 0;
}