//
// Created by Oleksiy Pogiba on 11/4/17.
//

#ifndef RUSH00_BULLET_HPP
#define RUSH00_BULLET_HPP

#include "Entry.hpp"


class Bullet : Entry {
protected:
	Bullet();
	bool _owner;
public:
	Bullet (const Bullet &val);
	Bullet(int x, int y, int damage, bool _owner);
	Bullet& operator=(const Bullet &val);
	~Bullet();
	void move_right_player();
	void move_left_boss();

};


#endif //RUSH00_BULLET_HPP
