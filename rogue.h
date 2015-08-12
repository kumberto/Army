#ifndef ROGUE_H
#define ROGUE_H

#include "exceptions.h"
#include <iostream>
#include "unit.h"

using namespace std;

class Rogue : public Unit {
	public:	
		Rogue(int, int);
		~Rogue();
		void attack(Unit&);
		void throwException();
};
#endif