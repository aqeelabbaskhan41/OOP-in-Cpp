#include <iostream>
#include "P.h"
using namespace std;

class P1:virtual public P
{
    public:
         P1()
        {
            cout<<"Parent 1"<<endl;
        }
};

