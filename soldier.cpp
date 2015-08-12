#include <iostream>
#include "soldier.h"

using namespace std;

Soldier::Soldier(int hit, int power) : Unit(hit, power) {
	cout << "Constructor Soldier" << endl;
}

Soldier::~Soldier(){
	cout << "Destructor Soldier" << endl;
}

void Soldier::attack(Unit& b) {
	cout << "Attack Soldier" << endl;
	Unit::attack(b);
	cout << "KontrAttack Rogue" << endl;
	b.kontrAttack(*this);
}
void Soldier::throwException() {
	throw SoldierDead();
}