#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include "exceptions.h"
#include "spellcaster.h"

class Healer : public Spellcaster {
	public :
		Healer(int, int, int);
		~Healer();
		void heal(Unit&);
		void throwException();
};


#endif