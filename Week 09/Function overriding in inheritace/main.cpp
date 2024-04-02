#include <iostream>
#include "Child.h"
using namespace std;

int main()
{
    Child c;
//    c.print();
    c.Parent::print();
    return 0;
}
