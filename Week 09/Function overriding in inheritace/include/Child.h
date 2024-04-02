#include <iostream>
#include "Parent.h"
using namespace std;

class Child :public Parent
{
    public:

        void print()
       {
           //Parent::print();
           cout<<"I am child"<<endl;
       }
};

