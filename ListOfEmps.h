#pragma once
#ifndef LISTOFEMPS_H
#define LISTOFEMPS_H

#include <iostream>
using namespace std;
#include "Employee.h"
#include "EmpNode.h"

class ListOfEmps {
	friend ostream& operator <<(ostream& out, ListOfEmps& l);
public:
	ListOfEmps();
	ListOfEmps(ListOfEmps& rhs);
	~ListOfEmps();
	void insertAtFront(string s, double d);
	void insertAtEnd(string s, double d);
	void deleteMostRecent();
	double getSalary(string name);
	ListOfEmps& operator =(const ListOfEmps& l);

private:
	EmpNode* head;
};
#endif // !LISTOFEMPS_H
