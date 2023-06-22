#include<iostream>
#include<fstream>
using namespace std;

// reading and writing in the same file...
// and closing the file

int main()
{
    // // Writing in text50.txt
    // ofstream obj("text50.txt");
    // string st1;
    // cout<<"Enter your name: "<<endl;
    // cin>>st1;
    // obj<<st1;
    // obj.close();  // It close the connection with "text50.txt".

    // Reading from text50.txt
    string st2;
    ifstream obj2("text50.txt");
    // obj2>>st2;
    getline(obj2, st2);
    cout<<st2;
    return 0;
}