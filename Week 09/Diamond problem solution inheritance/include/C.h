#include <iostream>
#include "P1.h"
#include "P2.h"
using namespace std;

class C:public P1,public P2
{
    public:
     C()
        {
            cout<<"Child"<<endl;
        }
};

