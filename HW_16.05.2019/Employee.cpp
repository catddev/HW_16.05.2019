#include "Employee.h"

Employee::Employee()
{
	name = "";
	salary = 0;
	type = "";
}

Employee::Employee(string name, double salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

void Employee::setType(string type)
{
	this->type = type;
}

string Employee::getType()
{
	return type;
}

void Employee::show()
{
	cout << type << " " << name << " " << salary << endl;
}
