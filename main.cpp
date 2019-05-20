#include <iostream>
#include "student.h"
#include "Boss.h"
#include "human.h"

using namespace std;

int main()
{
	Boss IvanB("Tsuprikov", "Ivan", "Anatolevi4", 18, 30);
	Student IvanS("Tsuprikov", "Ivan", "Anatolevi4", 18, true);
	Human* p;
	p = &IvanB;
	p->print();

	cout << endl;
	p = &IvanS;
	p->print();


}