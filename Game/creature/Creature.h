<<<<<<< HEAD
#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<string>

using std::string;

class Creature
{
private: 
	string name;
	int strength;
	int hitpoints; 
	int returnexp;
	int	defense;
	int maxHP;
public :
	Creature();
	Creature::Creature(string newName, int newStrength, int newHit, int getexp, int def);
	Creature(string newName, int newStrength, int newHit, int getexp);
	Creature(string newName, int newStrength, int newHit);
	virtual int getDamage();
	virtual string getSpecies() = 0;
	void hitpointschanger(int damage);
	int getstrength();
	int getMaxHP();
	int gethitpoints();
	string getName();
	int getreturnexp();
	void maxHPadd(int num);
	void resethp(int newhp);
	void resethp();
	void addstrength(int news);
	void losestrength(int olds);
	void adddefense(int newd);
	void losedefense(int oldd);
	void heal(int addhp);
	int getdefense();
	//void equip();
	//void unequip();
};


=======
#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<string>

using std::string;

class Creature
{
private: 
	string name;
	int strength;
	int hitpoints; 
	int returnexp;
	int	defense;
	int maxHP;
public :
	Creature();
	Creature::Creature(string newName, int newStrength, int newHit, int getexp, int def);
	Creature(string newName, int newStrength, int newHit, int getexp);
	Creature(string newName, int newStrength, int newHit);
	virtual int getDamage();
	virtual string getSpecies() = 0;
	void hitpointschanger(int damage);
	int getstrength();
	int getMaxHP();
	int gethitpoints();
	string getName();
	int getreturnexp();
	void maxHPadd(int num);
	void resethp(int newhp);
	void resethp();
	void addstrength(int news);
	void losestrength(int olds);
	void adddefense(int newd);
	void losedefense(int oldd);
	void heal(int addhp);
	int getdefense();
	//void equip();
	//void unequip();
};


>>>>>>> e116e9fe4796fb1aea981cb2fe3440a6c514b4d9
#endif