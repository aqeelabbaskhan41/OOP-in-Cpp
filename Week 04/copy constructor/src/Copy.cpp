#include <iostream>
#include "Copy.h"
using namespace std;

Copy::Copy(int x,int y)
{
    a=x;
    b=y;
    p=&a;
}

Copy::Copy(Copy &obj)
{
    a=obj.a;
    b=obj.b;
}

void Copy:: print()
{
    cout <<"a:"<<a<< "," <<"b:"<<b<<","<<"ptr:"<<*p<<endl;
}

void Copy:: change()
{
    //a=13;
    *p=50;
}
