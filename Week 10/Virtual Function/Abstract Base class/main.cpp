#include <iostream>
#include <string>
using namespace std;
class Tutorial {
protected:
    string title;
    float rating;

public:
    Tutorial(string t, float r)
    {
    title=t;
    rating=r;
    }

    virtual void display()=0; // Now this virtual function is pure virtual function and this
    // class is abstract


};

class VideoTutorial : public Tutorial {
private:
    int duration;

public:
    VideoTutorial(string t, float r, int d) : Tutorial(t, r)
    {
        duration=d;
    }

    void display()
     {
        cout << "Title: " << title << "\nRating: " << rating << "\n";
        cout << "Duration: " << duration << " minutes\n";
    }
};

class TextTutorial : public Tutorial {
private:
    int words;

public:
    TextTutorial(string t, float r, int w) : Tutorial(t, r), words(w) {}

    void display()
    {
        cout << "Title: " << title << "\nRating: " << rating << "\n";
        cout << "Words: " << words << "\n";
    }
};

int main() {
    VideoTutorial video("C++ Basics", 4.5, 60);
    TextTutorial text("Introduction to Algorithms", 4.7, 1500);

    // Displaying tutorials using the base class pointer

//    Tutorial* tutorial1 = &video;
//    Tutorial* tutorial2 = &text;
//
//    tutorial1->display();
//    cout << "------------------------\n";
//    tutorial2->display();
// OR
    //Tutorial *t; //it will give error bcz this is abstract class and we cannot create object of abstract
    // class only pointer object can be created
    Tutorial* tut[2];
    tut[0]=&video;
    tut[1]=&text;
    tut[0]->display();
    tut[1]->display();

    return 0;
}
