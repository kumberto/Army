#ifndef SOLDIER_H
#define SOLDIER_H

#include "unit.h"
#include "exceptions.h"

class Soldier : public Unit{
	public:
	Soldier(int hit, int power);
	~Soldier();
	void attack(Unit& b);
	void throwException();
};

#endif