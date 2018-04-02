<<<<<<< HEAD
#ifndef PLAYER_H
#define PLAYER_H

#include "Human.h"
#include "..\inventory\Carrier.h"


class Player : public Human, public Carrier
{
private:
	int level;
	int exp;
	string getSpecies();

public:
	Player();
	Player(string newName, int newStrength, int newHit);
	void expincrease(int n);
	int getexp();
	int getlevel();
	void checklevel();
	void levelup();
	void equip(equipment* equip);
	void unequip(equipment* equip);
	void switchequip(equipment* equip);
	void Doequip(equipment * Equipment);
	int getDamage();
};

#endif
=======
#ifndef PLAYER_H
#define PLAYER_H

#include "Human.h"
#include "..\inventory\Carrier.h"


class Player : public Human, public Carrier
{
private:
	int level;
	int exp;
	string getSpecies();

public:
	Player();
	Player(string newName, int newStrength, int newHit);
	void expincrease(int n);
	int getexp();
	int getlevel();
	void checklevel();
	void levelup();
	void equip(equipment* equip);
	void unequip(equipment* equip);
	void switchequip(equipment* equip);
	void Doequip(equipment * Equipment);
	int getDamage();
};

#endif
>>>>>>> e116e9fe4796fb1aea981cb2fe3440a6c514b4d9
