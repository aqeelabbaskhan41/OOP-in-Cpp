#pragma once
#include <person.h>

#include <iostream>
using namespace std;



class employee : public person
{
    private:
        int salary;

    protected:
        void setSalary(int newSalary);
        int getSalary();
    public:
        void setEmployeeDetails(string nm,int ag,int sal);
        void show();





};


