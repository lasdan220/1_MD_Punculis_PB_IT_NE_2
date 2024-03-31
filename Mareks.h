#include <iostream>
#include "Name.h"

using namespace std;

class Mareks: public Name {
	public:
		
		Mareks(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		
		string name;
};

