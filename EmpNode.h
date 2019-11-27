#ifndef EMPNODE_H
#define EMPNODE_H

#include <iostream>
using namespace std;
#include "Employee.h"

class EmpNode {
	friend class ListOfEmps;
	friend ostream& operator <<(ostream& out, ListOfEmps& l);
public:
	EmpNode();
	EmpNode(string n, double s);

private:
	Employee data;
	EmpNode* next;
};
#endif // !EMPNODE_H
