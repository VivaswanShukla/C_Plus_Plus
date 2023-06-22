#include<iostream>
#include<fstream>
using namespace std;

// Using open() function to open a file.....

int main()
{
    ofstream out;
    out.open("text50.txt");
    out<<"Namaste Bhai"<<endl;
    out<<"Hello, Brother"<<endl;
    out<<"Kemon aachhe"<<endl;
    out.close();

    ifstream in;
    in.open("text50.txt");
    string st1;
    while(in.eof() == 0)  // eof() end of line functon
    {
        getline(in, st1);
        cout<<st1<<endl;
    }
    in.close();
    return 0;
}