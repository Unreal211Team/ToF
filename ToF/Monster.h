#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Item.h"

using namespace std;
class Monster{
public:
	virtual	string	getName() = 0;
	virtual	string	getHealth() = 0;
	virtual	string	getAttack()	= 0;
	virtual void	takeDamage(int damage) = 0;
	virtual shared_ptr<vector<Item>> dropItem() = 0;
}