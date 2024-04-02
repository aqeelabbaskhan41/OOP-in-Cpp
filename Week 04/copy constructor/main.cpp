#include <iostream>
#include "Copy.h"
using namespace std;

int main()
{
    Copy c1(12,4);
    c1.print();
    // Shallow copy
    Copy c2=c1;
    cout << "Copy" << endl;
    c2.print();
    c2.change();
    cout << "Copy after change" << endl;
    c2.print();
    c1.print();
    return 0;
}
