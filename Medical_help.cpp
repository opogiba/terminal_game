//
// Created by Oleksiy Pogiba on 11/5/17.
//

#include "Medical_help.hpp"

Medical_help ::Medical_help() : Entry() {
	_speed = 1;
	_charters.symbol = 'm';
	_charters.color = 5;
}

Medical_help::Medical_help(int x, int y) : Entry(x,y) {
	_speed = 1;
	_charters.symbol = 'm';
	_charters.color = 5;
}

Medical_help::Medical_help(const Medical_help &val) : Entry(val)
{
	*this = val;
}
Medical_help::~Medical_help() {}

void Medical_help::move_left (int count)
{
	Entry::move_left(this->_speed);
}