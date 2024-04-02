#include "Display.h"

Display::Display()
{
    cout <<"I am display constructor"<<endl;
    n.set_Name();
    n.no=12;
    cout<<n.no<<endl;
//    n.name="niazi"; // we cannot access private through this method

//    cout<<"Age:"<<a.age<<endl;  // age is also private so give error

    a.set_Age();
}


