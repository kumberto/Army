#ifndef WARLOCK_H
#define WARLOCK_H

#include "spellcaster.h"
#include "exceptions.h"
#include "demon.h"

class Warlock : public Spellcaster {
	protected:
		Demon* demon;
	public:
		Warlock(int hit, int power, int mana);
		~Warlock();
		Demon* summonDemon();
		void throwException();

};

#endif