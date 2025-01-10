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

	// 생성자
	Troll(int level);
	

private:

	// 멤버 변수
	string	name;
	int		health;
	int		attack;


public:

	// 멤버 함수
	string getName();

	int getHealth();

	int getAttack();

	void takeDamage(int damage);


	Item* dropItem();
};

