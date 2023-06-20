#include <iostream>
#include <string.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }
    virtual void display(){};
};

class BigsmokeVideo : public CWH{
    float vlen;
    public:
        BigsmokeVideo(string t, float r, float vlen) : CWH(t, r){
            this->vlen = vlen;
        }
        void display(){
            cout<<"The title of the video is: "<<title<<endl;
            cout<<"The rating of the video is: "<<rating<<endl;
            cout<<"The length of the video is: "<<vlen<<" minutes"<<endl;
        }
};  

class BigsmokeText : public CWH{
    int words;
    public:
        BigsmokeText(string t, float r, int words) : CWH(t, r){
            this->words = words;
        }
        void display(){
            cout<<"The title of the text is: "<<title<<endl;
            cout<<"The rating of the text is: "<<rating<<endl;
            cout<<"The length of the text is: "<<words<<" words"<<endl;
        }
};

int main()
{
    BigsmokeVideo video("C++ Video", 4.90, 10.60);
    // video.display();

    BigsmokeText text("C++ Article", 4.2, 545);
    // text.display();

    CWH * pointer[2];

    pointer[0] = &video;
    pointer[1] = &text;

    pointer[0]->display();
    pointer[1]->display();
    return 0;
}