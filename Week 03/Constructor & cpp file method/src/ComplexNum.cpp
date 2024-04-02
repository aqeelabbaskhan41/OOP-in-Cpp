#include "ComplexNum.h"
#include "iostream"
using namespace std;
ComplexNum::ComplexNum()  //Default Constructor
{
    //real=12;
    //imag=13;
    cout <<"Constructor is called"<<endl;
}
/*ComplexNum::ComplexNum() //we can not define constructor more than one time
{
    cout <<"Constructor is called"<<endl;
}*/

ComplexNum::ComplexNum(int r,int i) //Parameterized Constructor
{
    real=r;
    imag=i;
    cout <<real<<imag<<endl;
}
void ComplexNum::print()
{
    cout <<real+imag<<endl;
}

void ComplexNum::print1()
{
    cout <<"real+imag"<<endl;
}

void ComplexNum:: myF()
{
    cout <<"Hii it's my object"<<endl;
}

