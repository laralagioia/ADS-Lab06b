#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {	
public:
	Employee();
	Employee(string n, double s); // constructors
	string getName();
	double getSalary();
private:
	string name;
	double salary = 0;
};

#endif // !EMPLOYEE_H