#pragma once
#include <iostream>
#include <random>
//header
#include "Monster.h"

class Goblin :public Monster {
	string name;	//name
	int health;		//hp
	int attack;		//attack
public:
	//������
	Goblin(int level);

	string	getName();						//name return
	int	getHealth();						//health return
	int	getAttack();						//attack damage return
	void	takeDamage(int damage);			//get attacked
	shared_ptr<vector<Item>> dropItem();	//drop random item
};

Goblin::Goblin(int level): name("���") {
	//ü�� ����ġ ����
	int miniHealth = level * 20;
	int maxHealth = level * 30;
	//���ݷ� ����ġ ����
	int miniAttack = level * 5;
	int maxAttact = level * 10;

	/*Randrange

	health = rand()
	attack = level * 5;*/
}

// return monster name
string Goblin::getName() {
	return name;
}

//return monster health
int Goblin::getHealth() {
	return health;
}

//return monster attack damage
int Goblin::getAttack() {
	return attack;
}

//monster get damaged
void Goblin::takeDamage(int damage) {
	health -= damage;

	if (health > 0) {
		cout << name << "�� ���� ü�� : " << health << endl;
	}
	else {
		cout << name << "��(��) �����ƽ��ϴ�! " << endl;	
	}
}

//monster dropedItem
shared_ptr<vector<Item>> Goblin::dropItem() {
	shared_ptr<vector<Item>> item;
	return item;
}