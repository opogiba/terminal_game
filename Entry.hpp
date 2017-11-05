//
// Created by Oleksiy Pogiba on 11/4/17.
//

#ifndef RUSH00_ENTRY_HPP
#define RUSH00_ENTRY_HPP

#include "iostream"
#include "game.hpp"
#include "ncurses.h"



class Entry {
protected:

	_event _coord;
	_characters _charters;
	int _Max_HP;
	std::string _name;
	int _level;
	int _CHP;
	int _damage;
	int _speed;
	Entry();
	Entry (const Entry &val);
	Entry(std::string name, int x, int y);
	Entry(int x, int y);

	virtual void move_up(int count);
	virtual void move_down(int count);
	virtual void move_left(int count);
	virtual void move_right(int count);

public:

	Entry& operator=(const Entry &val);
	Entry& operator+=(int val);
	Entry& operator-=(int val);


	virtual ~Entry();


	virtual void takeDamage(int amount);
	virtual void level_up();








	int get_Max_HP() const;

	const std::string &get_name() const;

	int get_level() const;


	int get_CHP() const;



	int get_speed() const;

	int get_damage() const;

	const _event &get_coord() const;

	const _characters &get_charters() const;

	void set_coord(const _event &_coord);


};


#endif //RUSH00_ENTRY_HPP
