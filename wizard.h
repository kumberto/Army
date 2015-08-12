#ifndef WIZARD_H
#define WIZARD_H

#include "exceptions.h"
#include "spellcaster.h"

class Wizard : public Spellcaster {
	public:
		Wizard(int hit, int power, int mana);
		~Wizard();
		void attackLightningStroke(Unit&);
		void throwException();
};

#endif