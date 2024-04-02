#include <iostream>
#include "OO.h"
using namespace std;

void OO::data(int x,int y)
{
    a=x;
    b=y;
}
void OO :: print ()
{
    cout <<a<<" ,"<<b<<endl;
}
OO OO:: operator+(OO c)
{
    OO temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}


