#include "ComplexNumber.h"
#include <iostream>

using namespace std;

int main()
{
    ComplexNumber CN;
    //CN.real;  // We cannot access real because it is private member of the class
    CN.print();
}
