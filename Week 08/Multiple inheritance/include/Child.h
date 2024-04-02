#define pragma once
#include <P2.h>
#include <P1.h>
#include <iostream>
using namespace std;

class Child : public P1,public P2 // in this order of inherit our constructors called p1,p2 then ch
{
    public:
        Child(int a);

};


