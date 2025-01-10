#pragma once
#include <string>
#include "IMonster.h"
#include "Character.h"
#include <iostream>
#include <random>

using namespace std;

class Troll : public Monster
{
public:

	// ������
	Troll(int level);
	

private:

	// ��� ����
	string	name;
	int		health;
	int		attack;


public:

	// ��� �Լ�
	string getName();

	int getHealth();

	int getAttack();

	void takeDamage(int damage);


	Item* dropItem();
};

