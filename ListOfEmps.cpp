#include "ListOfEmps.h"

ListOfEmps::ListOfEmps()
	:head(NULL)
{
}

ListOfEmps::ListOfEmps(ListOfEmps& rhs)
{
	*this = rhs;
}

ListOfEmps::~ListOfEmps()
{
	while (head) {
		deleteMostRecent();
	}
}

void ListOfEmps::insertAtFront(string s, double d)
{
	EmpNode* newNode = new EmpNode(s, d);

	if (!head) {
		head = newNode;
	}
	else {
		EmpNode* tempPtr = head;
		head = newNode;
		head->next = tempPtr;
	}
}

void ListOfEmps::insertAtEnd(string s, double d)
{
	EmpNode* newNode = new EmpNode(s, d);
	
	
	if (!head) {
		head = newNode;
	}
	else {
		EmpNode* tempPtr = head;
		while (tempPtr->next) {
			tempPtr = tempPtr->next;
		}

		tempPtr->next = newNode;
	}
	

}

void ListOfEmps::deleteMostRecent()
{
	EmpNode* deletePtr = head;
	EmpNode* tempPtr = head->next;

	head = tempPtr;
	delete deletePtr;

}

double ListOfEmps::getSalary(string name)
{
	EmpNode* tempPtr = head;

	while (tempPtr) {
		if (tempPtr->data.getName() == name) {
			return tempPtr->data.getSalary();
		}
		tempPtr = tempPtr->next;
	}

	if (!tempPtr) {
		cout << "Employee not found" << endl;
	}
}

ListOfEmps& ListOfEmps::operator=(const ListOfEmps& l)
{
	if (this != &l) {
		if (head) {
			while (head) {
				deleteMostRecent();
			}
		}

		EmpNode* origPtr = l.head;
		EmpNode* copyPtr = NULL;

		while (origPtr) {
			if (!head) {
				head = copyPtr = new EmpNode(origPtr->data.getName(), origPtr->data.getSalary());
				copyPtr->next = origPtr->next;
			}
			else {
				copyPtr->next = new EmpNode(origPtr->data.getName(), origPtr->data.getSalary());
				copyPtr = copyPtr->next;
			}
			origPtr = origPtr->next;
		}
	}
	
	return *this;
}

ostream& operator<<(ostream& out, ListOfEmps& l)
{
	EmpNode* tempPtr = l.head;
	out << "List of Employees:" << endl;

	while (tempPtr) {
		out << "Name: " << tempPtr->data.getName() << endl;
		out << "Salary: $ " << tempPtr->data.getSalary() << endl;

		tempPtr = tempPtr->next;
	}

	return out;
}
