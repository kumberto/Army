#include"rogue.h"

using namespace std;

Rogue::Rogue(int hit, int power): Unit(hit,power){
	cout << "Constructor Rogua" << endl;
}

Rogue::~Rogue() {
	cout << "Destructor Rogue" << endl;
}

void Rogue::attack(Unit& b) {
	cout << "Attack Rogue" << endl;
	Unit::attack(b);
}
void Rogue::throwException() {
	throw RogueDead();
}