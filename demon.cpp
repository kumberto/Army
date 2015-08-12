#include "demon.h"

Demon::Demon(int hit, int power, int mana) : Spellcaster(hit, power, mana) {
	std::cout << "Constructor Demon" << std::endl;
}

Demon::~Demon(){
	std::cout << "Destructor Demon" << std::endl;
}

void Demon::throwException(){
	throw DemonDead();
}