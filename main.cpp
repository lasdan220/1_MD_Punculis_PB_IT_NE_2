#include <iostream>
#include "Name.h"
#include "Andrejs.h"
#include "Mareks.h"
using namespace std;

int main()
{
	const int array_size = 2; //Palielinam masivu par 1

	Name *Names[array_size];
	
	Andrejs a;
	a.setName("Andrejs");
	
	Mareks b;
	b.setName("Mareks") // definejam savu vardu ka klases objektu
	
	Names[0] = &a;
	Names[1] = &b; // pieskiram savu objektu pedejam elementam masivaa
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
