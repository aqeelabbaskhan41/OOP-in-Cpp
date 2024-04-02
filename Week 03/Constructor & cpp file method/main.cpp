#include <iostream>
#include "ComplexNum.h"

using namespace std;

int main()
{
    ComplexNum c,n,cn,cn2(34,6); //we make three object without parameters so our constructor will called three times
    cn2.print();
    cn2.print1();
    cn.print1();
    ComplexNum cn3(15,5),cn4;
    cn3.print();
    cn4.print1();


    return 0;
}
