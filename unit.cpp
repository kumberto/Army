#include <iostream>
#include "unit.h"

Unit::Unit( int hit, int power): hitPoint(hit), overHead(hit), power(power){
	if ( hitPoint < 1 ) {
		throw NotHitPoint();
	}
	if ( power < 1 ) {
		throw NotPower();
	}
}
Unit::Unit(const Unit& other){

}
Unit::~Unit(){
}
void  Unit::validating() {
	if( hitPoint < 1 ) {
		hitPoint = 0;
		throwException();
	}
}

int Unit::getHit() const{
	return hitPoint;
}

int Unit::getPower() const{
	return power;
}
void Unit::setHit( int hit) {
	hitPoint += hit;
}

void Unit::attack(Unit& defender) {
	validating();
	defender.validating();
	defender.setHit(-power);
	defender.validating();
}
void Unit::kontrAttack(Unit& defender) {
	defender.hitPoint -= power / 2;
	validating();
}

int Unit::getHeads() const{
	return overHead;
}