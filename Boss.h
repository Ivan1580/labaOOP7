#pragma once
#include <string>
#include "Human.h"

class Boss :
	public Human
{
private:
	int number_of_workers;
public:
	Boss() {}
	Boss(string sn, string n, string m, int a, int nu);
	~Boss() {}
	void print() override;
};