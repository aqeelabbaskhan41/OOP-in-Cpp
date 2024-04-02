#include <iostream>

using namespace std;
class uoo
{
private:
    int n;
public:
    uoo()
    {
        n=0;
    }
    void print()
    {
        cout <<"n="<<n<<endl;
    }
    void operator ++() // prefix
    {
        //n=n+1;
        // or 
        ++n;
    }
    void operator ++(int) // postfix also use int inside the ()
    {
        //n=n+1;
        // or 
        n++;
    }
    
    void operator --() // prefix also use int inside the ()
    {
        
        --n;
    }
    
     void operator --(int) // postfix also use int inside the ()
    {
        
        n--;
    }
};

int main()
{
    uoo obj;
    obj.print();
    //++obj; //it gives error because object is not the type int it's type is uoo
    // so we have need to make an overloading function
    ++obj; // now we have made operator overloading function now we can increment in obj
    
	obj.print();
	
	obj++; // we have to make postfix oo function
	obj.print();
	
	--obj; // we have to make postfix oo function
	obj.print();
	
	obj--; // we have to make postfix oo function
	obj.print();
    return 0;
}
