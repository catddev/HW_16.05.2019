#pragma once
#include"Employee.h"

class Coder :public Employee {
public:
	Coder() :Employee() {}
	Coder(string name, double salary) :Employee(name, salary) {}
	void show() {
		Employee::show();
	}
	friend istream& operator>>(istream& is, Coder& obj) {
		is >> obj.name >> obj.salary;
		return is;
	}
};