#pragma once
#include <string>

using namespace std;

class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {}
	Human(string sn, string n, string m, int a);
	~Human() {}
	virtual void print() = 0;
};