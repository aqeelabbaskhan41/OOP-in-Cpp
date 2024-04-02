#include <iostream>

using namespace std;
class A
{
    int a;
    int b;
    int c;
public:
    A()
    {
        a=12;
        b=5;
    }
    virtual void add()
    {
        c=a+b;
    }
    virtual void print()
    {
        cout<<"a+b="<<c<<endl;
    }
};
class B
{
    int a;
    int b;
    int c;
public:
    B()
    {
        a=10;
        b=20;
    }
    void add()
    {
        c=a+b;
    }
    void print()
    {
        cout<<"a+b="<<c<<endl;
    }
};

int main()
{
    A *ptr;
//    A a;
//    ptr=&a;
//    ptr->add();
//    ptr->print();
//Directly pointer object does not work give it reference as above given or
//refer it into heap ptr= new A; if you have parameterized constructor then
//you cannot give arguments directly give them ptr=new A(arg1,arg2);
//      ptr->add();
//      ptr->print(); so now it will work
        ptr=new A;
        ptr->add();
        ptr->print();
        cout<<&ptr<<endl;

    A *ptr2;
        ptr2=new A;
        ptr2->add();
        ptr2->print();
        cout<<&ptr2<<endl;

        B *ptr1;
        ptr1=new B;
        ptr1->add();
        ptr1->print();
        cout<<&ptr2<<endl;

    return 0;
}
