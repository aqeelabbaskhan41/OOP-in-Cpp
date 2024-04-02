#pragma once
#include <iostream>
using namespace std;

class person
{
private:
     string name;
     int age;

protected:
    void setName(string newName);
    string getName();
public:
    void setAge(int newAge);
    int getAge();


//protected:


};

