//
// Created by Oleksiy Pogiba on 11/5/17.
//

#include "SpaceObject.hpp"

SpaceObject::SpaceObject() : Entry() {
	_speed = 2;
	_charters.symbol = 'm';
	_charters.color = 7;
}

SpaceObject::SpaceObject(int x, int y) : Entry(x,y) {
	_speed = 2;
	_charters.symbol = 'm';
	_charters.color = 7;
}

SpaceObject::SpaceObject(const SpaceObject &val) : Entry(val)
{
	*this = val;
}
SpaceObject::~SpaceObject() {}

void SpaceObject::move_left (int count)
{
	Entry::move_left(this->_speed);
}