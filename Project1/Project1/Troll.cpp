#pragma once
#include <string>
#include "Troll.h"
#include "IMonster.h"
#include "Character.h"
#include <iostream>
#include <random>

using namespace std;

class Troll : public Monster
{
public:

	// 생성자
	Troll(int level)
		: name("nomalTroll")
		, health(30)
		, attack(5)
	{
		health = getHealth() * level;
		attack = getAttack() * level;
	}


private:

	// 멤버 변수
	string	name;
	int		health;
	int		attack;


public:

	// 멤버 함수
	string getName()
	{

		name = "nomalTroll";

		return name;
	}

	int getHealth()
	{

		health = 30;

		return health;
	}

	int getAttack()
	{

		attack = 5;

		return attack;
	}

	void takeDamage(int damage)
	{
		if (0 < health)
		{
			if (damage >= health)
			{
				health = 0;
				cout << name << "를 처치하였습니다." << endl;
			}
			else
			{
				health -= damage;
				cout << name << "이 " << damage << " 피해를 받았습니다." << endl;
				cout << name << "의 남은 체력은 : " << health << endl;
			}
		}
		else
		{
			cout << name << "의 health 값 오류" << endl;
		}

	}


	Item* dropItem()
	{

		// 난수 생성 엔진
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 100);



		// 20프로 확률로 아이템 드랍
		int probability = 20;
		if (probability > dis(gen))
		{

		}

		Item* dropItemPtr = nullptr;

		return dropItemPtr;
	}
};