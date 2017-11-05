#include "Enemy.hpp"

Enemy::Enemy() : Entry() {
	_charters.symbol = '0';
	_charters.color = 4;
	_speed = 1;
}
Enemy::Enemy(int x, int y) : Entry(x,y) {

	_charters.symbol = '0';
	_coord.X = x;
	_coord.Y = y;
	_charters.color = 4;
	_level = 1;
	_CHP = 1;
	_speed = 1;
	_damage = _Max_HP;
}

Enemy::Enemy (const Enemy &val) : Entry(val)
{
	*this = val;
}

Enemy::~Enemy(){

}


void Enemy::move_left (int count)
{
	Entry::move_left(this->_speed);
}
