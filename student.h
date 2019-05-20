#pragma once
#include <string>
#include "Human.h"

class Student :
	public Human
{
private:
	bool on_lesson;
public:
	Student() {}
	Student(string sn, string n, string m, int a, bool o);
	~Student() {}
	void print() override;
};