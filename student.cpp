#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string sn, string n, string m, int a, bool o)
{
	surname = sn;
	name = n;
	midname = m;
	age = a;
	on_lesson = o;
}
void Student::print()
{
	cout << "Student"<<endl;
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Midname: " << midname << endl;
	cout << "Age: " << age << endl;
	if (on_lesson == true)
	{
		cout << "Na yroke? da ";
	}
	else
	{
		cout << "Na yroke? net";
	}
}