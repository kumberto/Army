#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "exceptions.h"
#include <iostream>
#include "unit.h"

using namespace std;

class Vampire : public Unit {
	public: 
		Vampire(int hit, int power);
		~Vampire();
		void revival(int hit, Unit& other);
		void attack(Unit& );
		void kontrAttack(Unit& );
		void throwException();

};
#endif