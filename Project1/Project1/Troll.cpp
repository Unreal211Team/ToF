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

	// ������
	Troll(int level)
		: name("nomalTroll")
		, health(30)
		, attack(5)
	{
		health = getHealth() * level;
		attack = getAttack() * level;
	}


private:

	// ��� ����
	string	name;
	int		health;
	int		attack;


public:

	// ��� �Լ�
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
				cout << name << "�� óġ�Ͽ����ϴ�." << endl;
			}
			else
			{
				health -= damage;
				cout << name << "�� " << damage << " ���ظ� �޾ҽ��ϴ�." << endl;
				cout << name << "�� ���� ü���� : " << health << endl;
			}
		}
		else
		{
			cout << name << "�� health �� ����" << endl;
		}

	}


	Item* dropItem()
	{

		// ���� ���� ����
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 100);



		// 20���� Ȯ���� ������ ���
		int probability = 20;
		if (probability > dis(gen))
		{

		}

		Item* dropItemPtr = nullptr;

		return dropItemPtr;
	}
};