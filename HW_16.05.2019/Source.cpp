#include"Manager.h"
#include"Admin.h"
#include"Coder.h"
#include<vector>
#include<fstream>

int main() {

	ifstream in_file("in.txt");
	vector<Employee*> v;
	Employee* es;
	
	string str;
	while (!in_file.eof()) {
		in_file >> str;
		if (str == "manager"){
			Manager*tmp = new Manager;
			in_file >> (*tmp);
			tmp->setType(str);
			es = tmp;
		}
		else if (str == "admin"){
			Admin *tmp = new Admin;
			in_file >> (*tmp);
			tmp->setType(str);
			es = tmp;
		}
		else if (str == "coder") {
			Coder* tmp = new Coder;
			in_file >> (*tmp);
			tmp->setType(str);
			es = tmp;
		}
		v.push_back(es);
		in_file.get();
	}
	in_file.close();

	cout << "MANAGERS" << endl;
	for (int i = 0; i < v.size(); i++)
		if (v[i]->getType() == "manager")
			v[i]->show();
	cout << endl;
	cout << "ADMINISTRATORS" << endl;
	for (int i = 0; i < v.size(); i++)
		if (v[i]->getType() == "admin")
			v[i]->show();
	cout << endl;
	cout << "PROGRAMMERS" << endl;
	for (int i = 0; i < v.size(); i++)
		if (v[i]->getType() == "coder")
			v[i]->show();
	cout << endl;

	system("pause");
	return 0;
}