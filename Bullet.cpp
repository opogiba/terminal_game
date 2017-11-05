//
// Created by Oleksiy Pogiba on 11/4/17.
//

#include "Bullet.hpp"

Bullet::Bullet() : Entry() {
	_charters.symbol = 'b';
	_charters.color = 3;
	_speed = 2;
	_owner = TRUE;
}

Bullet::Bullet(int x, int y, int damage, bool owner) : Entry() {

	_owner = owner;
	_charters.symbol = 'b';
	_coord.X = x;
	_coord.Y = y;
	_charters.color = 3;
	_level = 1;
	_CHP = 1;
	_damage = damage;
	_speed = 2;
}

Bullet::Bullet (const Bullet &val) : Entry(val)
{
	*this = val;
}

Bullet& Bullet::operator=(const Bullet &val) {
	Entry::operator=(val);
	if (this == &val)
	{
		return *this;
	}
	this->_owner = val._owner;
	return (*this);
}

Bullet::~Bullet(){

}



void Bullet::move_right_player() {
	Entry::move_right(this->_speed);
}

void Bullet::move_left_boss() {
	Entry::move_left(-(this->_speed));
}