#include <iostream>

using namespace std;
class Parent
{
public:
    virtual void display()
    {
        cout<<"I am Parent"<<endl;
    }
};
class Child1:public Parent
{
public:
    void display()
    {
        cout<<"I am Child1"<<endl;
    }
};
class Child2:public Parent
{
public:
    void display()
    {
        cout<<"I am Child2"<<endl;
    }
};
int main()
{
    Parent* ptr;
    Parent p;
    ptr=&p; //it work
    ptr->display();
    Child1 ch1;
    ptr=&ch1;// for this it will not work till parent
    //class display not become vitual
    ptr->display();
    Child2 ch2;
    ptr=&ch2;//same case here also virtual essential else parent's display run
    ptr->display();
    return 0;
}
