#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "unit.h"


class Spellcaster : public Unit{
	private:
		int manna;
	public:
		Spellcaster(int hit, int power, int mana);
		~Spellcaster();
		virtual void useManna(int);
		int getManna() const;
		void attack(Unit&);
		virtual void throwException() = 0;
};

#endif