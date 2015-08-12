#include "vampire.h"

using namespace std;

Vampire::Vampire(int hit, int power) : Unit(hit,power) {
	cout << "Construktor Vampire" << endl;
}

Vampire::~Vampire() {
	cout << "Destructor Vampire" << endl;
}

void Vampire::revival(int amountInput, Unit& other ) {
	int livePoint = getHeads() - getHit();
	int hitOther = other.getHit();
	
	if( hitOther > amountInput && amountInput < livePoint ) {
		Unit::setHit(amountInput);
	} else if ( hitOther < amountInput ) {
		amountInput = hitOther;
		Unit::setHit(amountInput);
	} else {
		amountInput = livePoint;
		Unit::setHit(amountInput);
	}
	
}

void Vampire::attack(Unit& other) {
	cout << "Attack Vampire" << endl;
	int amountInput = getPower();
	revival(amountInput, other);
	Unit::attack(other);
	other.kontrAttack(*this);
}
void Vampire::kontrAttack(Unit& other){
	int amountInput = getPower() / 2;
	revival(amountInput, other);
	Unit::kontrAttack(other);
	
}
void Vampire::throwException(){
	throw VampireDead();
}