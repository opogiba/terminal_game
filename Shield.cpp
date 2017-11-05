//
// Created by Oleksiy Pogiba on 11/5/17.
//

#include "Shield.hpp"

Shield ::Shield() : Entry() {
	_speed = 1;
	_charters.symbol = 's';
	_charters.color = 6;
}

Shield::Shield(int x, int y) : Entry(x,y) {
	_speed = 1;
	_charters.symbol = 's';
	_charters.color = 6;
}

Shield::Shield(const Shield &val) : Entry(val)
{
	*this = val;
}
Shield::~Shield() {

}
void Shield::move_left (int count)
{
	Entry::move_left(this->_speed);
}