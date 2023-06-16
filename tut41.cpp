#include <iostream>
using namespace std;

// *****                 Using Virtual class removes Ambiguity and Duplicacy......

class Student
{
protected:
    int RollNo;

public:
    void setNumber(int x)
    {
        RollNo = x;
    }
    void PrintNumber()
    {
        cout << "The roll no of the student is: " << RollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void PrintMarks()
    {
        cout << "The marks of the Students with roll no " << RollNo << " is: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void setScore(int s)
    {
        score = s;
    }
    void DisplayScore()
    {
        cout << "Your score in sports out of 10 is: " << score << endl;
    }
};

class Results : public Test, public Sports
{
private:
    float final;

public:
    void Display()
    {
        final = maths + physics + score;
        PrintNumber();
        PrintMarks();
        DisplayScore();
        cout << "The total marks of the student  out of 210 is: " << final << endl;
    }
};

int main()
{
    Results r;
    r.setNumber(58);
    r.setMarks(89.5, 93.0);
    r.setScore(9);
    r.Display();
    return 0;
}