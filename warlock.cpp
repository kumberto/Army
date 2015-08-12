#include "warlock.h"
#include "demon.h"



Warlock::Warlock(int hit, int power, int mana) : Spellcaster(hit, power, mana) {
	std::cout << "Constructor Warlock " << std::endl;
}
Warlock::~Warlock(){
	std::cout << "Destructor Warlock " << std::endl;
}
Demon* Warlock::summonDemon(){
	if (getManna() < 5 ) {
		throw NotManna();
	}
	useManna(-5);
	demon = new Demon(5, 7);
	
	return demon;
}
void Warlock::throwException() {
	throw WarlockDead();
}