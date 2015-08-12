#include "spellcaster.h"

Spellcaster::Spellcaster(int hit, int power, int mana) : Unit(hit, power), manna(mana){
	std::cout << "Constructor Spellcaster" << std::endl;
}
Spellcaster::~Spellcaster(){
	std::cout << "Destructor Spellcaster" << std::endl;
}

void Spellcaster::useManna(int mana) {
	manna -= mana;
}
int Spellcaster::getManna() const{
	return manna;
}

void Spellcaster::attack(Unit& b){
	Unit::attack(b);
	b.kontrAttack(*this);
}