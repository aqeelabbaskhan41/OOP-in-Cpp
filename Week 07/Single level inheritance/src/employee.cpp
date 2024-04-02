#include "employee.h"

void employee:: setSalary(int newSalary)
   {
        salary = newSalary;
    }

int employee:: getSalary()
    {
        return salary;
    }
void employee:: setEmployeeDetails(string nm,int ag,int sal)
{
    setName(nm);
    setAge(ag);
    setSalary(sal);
}

void employee:: show()
  {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Salary: $" << getSalary() << endl;
    }


