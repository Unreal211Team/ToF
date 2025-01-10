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
	//생성자
	Goblin(int level);

	string	getName();						//name return
	int	getHealth();						//health return
	int	getAttack();						//attack damage return
	void	takeDamage(int damage);			//get attacked
	shared_ptr<vector<Item>> dropItem();	//drop random item
};

Goblin::Goblin(int level): name("고블린") {
	//체력 랜덤치 범위
	int miniHealth = level * 20;
	int maxHealth = level * 30;
	//공격력 랜덤치 범위
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
		cout << name << "의 남은 체력 : " << health << endl;
	}
	else {
		cout << name << "을(를) 물리쳤습니다! " << endl;	
	}
}

//monster dropedItem
shared_ptr<vector<Item>> Goblin::dropItem() {
	shared_ptr<vector<Item>> item;
	return item;
}