#include <iostream>

using namespace std;
class Test
{
    int a=10;
public:
    void test()const{
    //a++;  // it throws error bcz it is a constant member function
    //a=a+10; // error
    cout<<a;
    }

    void test2(){

    cout<<a+3;
    }

};




int main()
{
    int a=10;
    a=20; // in simple var we can update
    const int b=12+a; // it will work because we are assigning value
    //b=20; // now it throw error bcz cannot change value of constant

    //const Test t; ??
    const Test t;
    t.test();//11 but when we make function constant
    //t.test2(); //using constant object we can access only constant member function

//    const Test t2; // it give error with non constant function
//    t2.test2();
    return 0;
}
