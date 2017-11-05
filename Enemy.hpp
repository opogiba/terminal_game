//
// Created by Oleksiy Pogiba on 11/4/17.
//
#include "Entry.hpp"

#ifndef RUSH00_ENEMY_HPP
#define RUSH00_ENEMY_HPP


class Enemy : Entry {
protected:
	Enemy();
public:
	void move_left(int count);
	Enemy (const Enemy &val);
	Enemy(int x, int y);

	~Enemy();
};


#endif //RUSH00_ENEMY_HPP
