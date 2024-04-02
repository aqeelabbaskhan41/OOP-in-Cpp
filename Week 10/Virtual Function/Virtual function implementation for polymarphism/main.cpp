#include <iostream>

using namespace std;
class Base
{
public:
    int base_var=1;
    virtual void display()
    {
        cout<<"Displaying Base class variable base_var: "<<base_var<<endl;
    }
};
class Derived: public Base
{
    public:
    int derived_var=2;
    void display()
    {
        cout<<"Displaying Derived class variable derived_var: "<<derived_var<<endl;
        cout<<"Here I am also showing Base class variable base_var: "<<base_var<<endl;
    }
};
int main()
{   Base *base_class_ptr;
    Base base_obj;
    Derived derived_obj;

    base_class_ptr=&derived_obj;
    base_class_ptr->display();// This is default behavior in which it shows base class display() even
    // pointed to derived class obj. so for this we use virtual with base class display()

    return 0;
}
