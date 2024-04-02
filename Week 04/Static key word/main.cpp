#include <iostream>

using namespace std;
//int a=10; //This one and static works same but it is global
// and static is for in range of local loop or function.
void f()
{
    //int a=10; // it could not update value so we use static
    static int a=10; //at first call it will read this line and on next it will
    //skip it and update value like global.
    //Static lies in the global part of memory.
    cout<<a<<endl;
    a++;
}
int main()
{
    f();
    f();
    f();
    return 0;
}
