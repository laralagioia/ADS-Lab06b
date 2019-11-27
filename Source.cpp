#include <iostream>
using namespace std;
#include "ListOfEmps.h"
#include "Employee.h"
#include "EmpNode.h"

int main(){

	ListOfEmps myList;
	myList.insertAtEnd("Thomas", 140); 
	myList.insertAtFront("Lara", 222.2);
	myList.insertAtFront("Vitor", 888.12);
	//myList.insertAtFront("Thomas", 140);

	ListOfEmps myOtherList = myList;

	myList.deleteMostRecent();
	

	cout << "My List:" << endl;
	cout << myList;
	cout << "--------------------" << endl;
	cout << "My Other List:" << endl;
	cout << myOtherList;

	return 0;
}