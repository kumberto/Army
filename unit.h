#ifndef UNIT_H
#define UNIT_H

#include <iostream> 
#include "exceptions.h"



class Unit {
	private:
		int hitPoint;
		int overHead;
		int power;
	public:
		Unit( int hit, int power);
		Unit(const Unit&);
		virtual ~Unit();
		int getHit() const;
		int getPower() const;
		int getHeads() const;
		void setHit(int);
		void  validating();
		virtual void attack(Unit& );
		virtual void kontrAttack(Unit&);
		virtual void throwException() = 0;
};


#endif