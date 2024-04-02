#include <iostream>

using namespace std;

class f_func
{
private:
    int a;
    int b;
public:
    void set_val(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void sum(f_func& s);
};


void sum(f_func& s)
{
    s.a=20;// we can update
    cout <<s.a+s.b;
}

int main()
{
    f_func s;
    s.set_val(10,10);

    sum(s);
    return 0;
}
