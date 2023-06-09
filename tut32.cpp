#include <iostream>
using namespace std;
// ***CONSTRUCTORS WITH DEFAULT ARGUMENTS
class simple
{
    int d1, d2, d3;

public:
    simple(int x, int y = 5, int z = 7)
    {
        d1 = x;
        d2 = y;
        d3 = z;
    }
    void printData();
};

void simple ::printData()
{
    cout << "The value of d1, d2 and d3 are: " << d1 << ", " << d2 << " and " << d3 << endl;
}

int main()
{
    // simple s(10, 20, 30); If values are not given, then the constructor takes the default values given during the declaration and defination
    simple s(10);
    s.printData();
    return 0;
}