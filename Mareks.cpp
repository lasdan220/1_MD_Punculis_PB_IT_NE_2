#include <iostream>
#include "Name.h"
#include "Mareks.h"

using namespace std;

Mareks::Mareks(string n) 
{
	name=n;
}

void Mareks::setName(string n) 
{
	name=n;
}

void Mareks::Print() const {
	cout << name << endl;
}
