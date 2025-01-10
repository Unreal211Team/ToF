#include "Orc.h"
#include <stdlib.h>
#include <ctime>

Orc::Orc(int level)
{
	srand(time(NULL));
	int random = rand();

	static int number = 1;

	name = "Orc" + to_string(number++);

	health = level * (20 + random % 11);
	attack = level * (5 + random % 6);
}

string Orc::getName()
{
	return name;
}

int Orc::getHealth()
{
	return health;
}

int Orc::getAttack()
{
	return attack;
}

void Orc::takeDamage(int damage)
{
	health -= damage;
	health = health < 0 ? 0 : health;
}

shared_ptr<vector<Item>> Orc::dropItem()
{
	return shared_ptr<vector<Item>>();
}