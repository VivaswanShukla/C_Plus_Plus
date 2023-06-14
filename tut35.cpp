// ******                     DESTRUCTORS          ************

#include<iostream>
using namespace std;
int count = 0;
class number
{
    public:
        number(){
            count++;
            cout<<"Constructor called for object number "<<count<<endl;
        }
        ~number(){
            cout<<"Destructor called for object "<<count<<endl;
            count--;
        }
};
int main()
{
    cout<<"We are in main"<<endl;
    cout<<"Creating are first object"<<endl;
    number n1;
    {
        cout<<"Entered the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        number n2, n3;
        cout<<"Exitiing the block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}