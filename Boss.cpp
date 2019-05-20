#include <iostream>
#include "Boss.h"
using namespace std;

Boss::Boss(string sn, string n, string m, int a, int nu)
{
	surname = sn;
	name = n;
	midname = m;
	age = a;
	number_of_workers = nu;
}
void Boss::print()
{
	cout << "Boss" << endl;
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Midname: " << midname << endl;
	cout << "Nubmer of workers: " << number_of_workers << endl;
}