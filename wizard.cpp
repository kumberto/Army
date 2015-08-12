#include "wizard.h"

Wizard::Wizard(int hit, int power, int mana) : Spellcaster(hit, power, mana) {
	std::cout << "Constructor Wizard " << std::endl;
}

Wizard::~Wizard(){
	std::cout << "Destructor Wizard " << std::endl;
}

void Wizard::attackLightningStroke(Unit& other) {
	int mana = getManna();
	int otherHit = other.getHit();
	
	if( otherHit < mana ) {
		mana = otherHit;
	}
	useManna(mana);
	other.setHit(-mana);
}

void Wizard::throwException() {
	throw WizardDead();
}