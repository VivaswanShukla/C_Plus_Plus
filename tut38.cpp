#include<iostream>
using namespace std;

class Grandparents{
    protected:
        string name = "Dwijendra Narayan";
        string LastName = " Pandey";
    public: 
        void display()
        {
            cout<<"The name is : "<<name<<LastName<<endl;
        }
};

class Parents:public Grandparents{
    protected:
        string namep = "Mamta ";
        string Lastn = "Shukla";
    public: 
        void displayp()
        {
            cout<<"The name is: "<<namep<<Lastn<<LastName<<endl;
        }
};

class Children:public Parents{
    string namec = "Rounak ";
    public:
        void displayc(){
            cout<<"The name is: "<<namec<<Lastn<<LastName<<endl;
        }
};

int main()
{
    Children c;
    c.display();
    c.displayc();
    c.displayp();
    return 0;
}