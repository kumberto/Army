#ifndef DEMON_H
#define DEMON_H

#include "spellcaster.h"
#include "exceptions.h"

class Demon : public Spellcaster {
	public:
		Demon(int hit, int power, int mana = 0);
		~Demon();
		void throwException();
};


#endif