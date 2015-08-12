#include "healer.h"

using namespace std;

Healer::Healer(int hit, int power, int mana) : Spellcaster(hit, power, mana) {
	cout << "Constructor Healer" << endl;
}
Healer::~Healer(){
	cout << "Destructor Healer" << endl;
}
void Healer::heal(Unit& other) {
	int headsOther = other.getHeads() - other.getHit();
	if ( headsOther < getManna() ) {
		
	} else {
		headsOther = getManna();
	}
	other.setHit(headsOther);
	useManna(headsOther);
}

void Healer::throwException() {
	throw HealerDead();
}