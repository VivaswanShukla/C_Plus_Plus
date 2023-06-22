#include<iostream>
#include<fstream>
using namespace std;

// The useful classes needed to work with files are:
// 1. fstreambase
// 2. ofstream -> derived from fstreambase
// 3. ifstream -> derived from fstreambase

int main()
{
    // Opening files using constructor and writing it
    string st1 = "Hello, world. This is Vivaswan Shukla.";
    ofstream obj("text50.txt");   //Here obj is the object created...
    obj<<st1;                     // Used to write...

    // Opening files using constructor and reading it
    string st2;
    ifstream obj2("text50b.txt");
    // obj2>>st2;
    //cout<<st2;  // If we do this, then only the first word of the line will be printed..
    getline(obj2, st2);
    cout<<st2;
    return 0;
}