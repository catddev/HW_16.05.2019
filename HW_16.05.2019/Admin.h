#pragma once
#include"Employee.h"

class Admin :public Employee {
public:
	Admin() :Employee() {}
	Admin(string name, double salary) :Employee(name, salary) {}
	void show() {
		Employee::show();
	}
	friend istream& operator>>(istream& is, Admin& obj) {
		is >> obj.name >> obj.salary;
		return is;
	}
};