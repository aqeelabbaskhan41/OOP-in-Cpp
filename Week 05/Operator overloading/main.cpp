#include <iostream>
#include "OO.h"
using namespace std;

int main()
{
    OO obj1,obj2,obj3;
    obj1.data(3,3);
    obj1.print();
    obj2.data(10,6);
    obj2.print();
    //obj3=obj1+obj2; // we were not able to do this if we don't use o.overloading
    obj3=obj1+obj2; // here + is over loaded
    obj3.print();
    return 0;
}
