#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
} b;

void binary ::read()
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect BInary Format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '0')
            s.at(i) = '1';
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    cout<<"Displaying your binary number: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}