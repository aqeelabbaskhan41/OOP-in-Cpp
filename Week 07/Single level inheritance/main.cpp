#include <iostream>

#include "employee.h"

using namespace std;

int main()
{
    employee emp1;
    string name;
    int age,salary;
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: $";
    cin >> salary;

    emp1.setEmployeeDetails(name,age,salary);
    emp1.show();
    return 0;
}
