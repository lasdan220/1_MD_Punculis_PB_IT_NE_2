#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Mareks.h"
using namespace std;

int main()
{
	const int array_size = 2;

	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Mareks b;
	b.setName("Mareks"); 
	
	Names[0] = &a;
	Names[1] = &b;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
