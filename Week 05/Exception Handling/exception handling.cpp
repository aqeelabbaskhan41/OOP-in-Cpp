#include <iostream>
 using namespace std;

 int main()
 {
     int age;
     cout <<"Enter your age:";
     cin>>age;
     try
     {
        if (age>=18)
        {
            cout <<"You are able to pass the vote"<<endl;
        }
        else
        {
            //throw(age);
            // instead age you can return other values
            throw 404;
        }
     }

    //  catch(...) // use this if you do not throw or return anything in else body
     catch(int a)
     {
        //  cout <<"You are not able to vote. Your age is:";
         cout<<"error "<<a<<" found";
     }
 }
