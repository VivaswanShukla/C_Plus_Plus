#include <iostream>
using namespace std;

class Tesla                    // This is an abstract base class. A Base class which has atleast one pure virtual function is called
                                //an Abstract base class
{
    protected:
    string model;
    string type;

public:
    Tesla(string model, string type)
    {
        this->model = model;
        this->type = type;
    }
    virtual void display() = 0;// This is a pure virtual function
};

class ModelX : public Tesla{
    int HP;
    int Torque;
    public:
        ModelX(int HP, int Torque, string m, string t) : Tesla(m, t){
            this->HP = HP;
            this->Torque = Torque;
        }
        void display(){
            cout<<"This is Tesla "<<model<<endl
                <<"Its Horse Power is: "<<HP<<endl
                <<"It has "<<Torque<<" nm torque"<<endl
                <<"It is an "<<type<<endl;
        }
};

class SPlaid : public Tesla{
    int HP;
    int Torque;
    public:
        SPlaid(int HP, int Torque, string m, string t) : Tesla(m, t){
            this->HP = HP;
            this->Torque = Torque;
        }
        void display(){
            cout<<"This is Tesla "<<model<<endl
                <<"Its Horse Power is: "<<HP<<endl
                <<"It has "<<Torque<<" nm torque"<<endl
                <<"It is a "<<type<<endl;
        }
};

int main()
{
    ModelX X(610, 820, "Tesla Model X", "SUV");
    SPlaid S(1030, 1200, "Tesla S PLaid", "Sedan");
    Tesla * point[2];
    point[0] = &X;
    point[1] = &S;
    point[0]->display();
    point[1]->display();
    
    return 0;
}