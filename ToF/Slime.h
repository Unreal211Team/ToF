#pragma once
#include "Monster.h";
#include <string>


using namespace std;

class Slime : public Moster
{
private:
	string name;
	int health;
	int attack;

public:
	Slime(int level);
	string getName();
	
	int getHealth();
	
	int getAttack();

	void takeDamage(int damage);

	Item* dropItem();

};