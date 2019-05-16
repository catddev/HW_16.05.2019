#pragma once
#include"Employee.h"

class Manager :public Employee {
public:
	Manager():Employee(){}
	Manager(string name, double salary) :Employee(name, salary) {}
	void show() {
		Employee::show();
	}
	friend istream& operator>>(istream& is, Manager& obj) {
		is >> obj.name >> obj.salary;
		return is;
	}
};
