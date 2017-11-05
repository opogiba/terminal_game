//
// Created by Oleksiy Pogiba on 11/5/17.
//

#ifndef RUSH00_DAMAGE_HPP
#define RUSH00_DAMAGE_HPP

#include "Entry.hpp"

class Damage : Entry {
protected:
	Damage();
public:
	Damage(int x, int y);
	Damage (const Damage &val);
	~Damage();
	void move_left (int count);
};

#endif //RUSH00_DAMAGE_HPP
