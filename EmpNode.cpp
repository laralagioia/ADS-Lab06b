#include "EmpNode.h"

EmpNode::EmpNode()
	:data(Employee()), next(NULL)
{
}

EmpNode::EmpNode(string n, double s)
	:data(Employee(n, s)), next(NULL)
{
}
