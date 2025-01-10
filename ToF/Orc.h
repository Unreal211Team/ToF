#pragma once

#include "Monster.h"

using namespace std;

class Orc : public Monster
{
private:
	string	name;
	int		health;
	int		attack;

public:
	Orc(int level = 1);
	string	getName();
	int		getHealth();
	int		getAttack();
	void	takeDamage(int damage);
	shared_ptr<vector<Item>> dropItem();
};
