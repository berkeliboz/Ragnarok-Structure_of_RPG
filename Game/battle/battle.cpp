<<<<<<< HEAD
#include <iostream>
#include <string>
#include <math.h>
#include "battle.h"


using std::endl;
using std::cout;


void attack(Creature* A, Creature *B)
{
	int A_damage = A->getDamage() - B->getdefense();
	cout << A->getName() << "is aggacking "<< B->getName() << ", damage is " << A_damage << endl;
	B->hitpointschanger(A_damage);
	// if B is
	cout << B->getName() << " HP is " << B->gethitpoints() << endl;
}

void SOLO(Creature* A, Creature* B)
{
	//int A_damage, B_damage;
	cout << A->getName() << " is in battle with " << B->getName() << endl;
	cout << A->getName() << " HP is " << A->gethitpoints() << endl;
	cout << B->getName() << " HP is " << B->gethitpoints() << endl;
	while (A->gethitpoints() > 0 && B->gethitpoints() > 0)
	{
		attack(A, B);
		attack(B, A);	 
	}
	if (B->gethitpoints() <= 0)
		cout << A->getName() << " has Killed " << B->getName() << endl;
	else
		cout << A->getName() << " has been killed by " << B->getName() << endl;
}




//
//class battle
//{
//
//public:
//	void attack(Creature* A, Creature *B)
//	{
//		int A_damage = A->getDamage() - B->getdefense();
//		cout << A->getName() << "is aggacking "<< B->getName() << ", damage is " << A_damage << endl;
//		B->hitpointschanger(A_damage);
//		// if B is
//		cout << B->getName() << " HP is " << B->gethitpoints() << endl;
//	}
//
//	void SOLO(Creature* A, Creature* B)
//	{
//		//int A_damage, B_damage;
//		cout << A->getName() << " is in battle with " << B->getName() << endl;
//		cout << A->getName() << " HP is " << A->gethitpoints() << endl;
//		cout << B->getName() << " HP is " << B->gethitpoints() << endl;
//		while (A->gethitpoints() > 0 && B->gethitpoints() > 0)
//		{
//			attack(A, B);
//			attack(B, A);
//			/*
//			A_damage = A->getDamage() - B->getdefense();
//			B_damage = B->getDamage() - A->getdefense();
//			cout << A->getName() << " damage is " << A_damage << endl;
//			cout << B->getName() << " damage is " << B_damage << endl;
//			A->hitpointschanger(B_damage);
//			B->hitpointschanger(A_damage);
//			cout << A->getName() << " HP is " << A->gethitpoints() << endl;
//			cout << B->getName() << " HP is " << B->gethitpoints() << endl;
//			*/
//
//		}
//		if (B->gethitpoints() <= 0)
//			cout << A->getName() << " has Killed " << B->getName() << endl;
//		else
//			cout << A->getName() << " has been killed by " << B->getName() << endl;
//	}
//
//
//};

=======
#include <iostream>
#include <string>
#include <math.h>
#include "battle.h"


using std::endl;
using std::cout;


void attack(Creature* A, Creature *B)
{
	int A_damage = A->getDamage() - B->getdefense();
	cout << A->getName() << "is aggacking "<< B->getName() << ", damage is " << A_damage << endl;
	B->hitpointschanger(A_damage);
	// if B is
	cout << B->getName() << " HP is " << B->gethitpoints() << endl;
}

void SOLO(Creature* A, Creature* B)
{
	//int A_damage, B_damage;
	cout << A->getName() << " is in battle with " << B->getName() << endl;
	cout << A->getName() << " HP is " << A->gethitpoints() << endl;
	cout << B->getName() << " HP is " << B->gethitpoints() << endl;
	while (A->gethitpoints() > 0 && B->gethitpoints() > 0)
	{
		attack(A, B);
		attack(B, A);	 
	}
	if (B->gethitpoints() <= 0)
		cout << A->getName() << " has Killed " << B->getName() << endl;
	else
		cout << A->getName() << " has been killed by " << B->getName() << endl;
}




//
//class battle
//{
//
//public:
//	void attack(Creature* A, Creature *B)
//	{
//		int A_damage = A->getDamage() - B->getdefense();
//		cout << A->getName() << "is aggacking "<< B->getName() << ", damage is " << A_damage << endl;
//		B->hitpointschanger(A_damage);
//		// if B is
//		cout << B->getName() << " HP is " << B->gethitpoints() << endl;
//	}
//
//	void SOLO(Creature* A, Creature* B)
//	{
//		//int A_damage, B_damage;
//		cout << A->getName() << " is in battle with " << B->getName() << endl;
//		cout << A->getName() << " HP is " << A->gethitpoints() << endl;
//		cout << B->getName() << " HP is " << B->gethitpoints() << endl;
//		while (A->gethitpoints() > 0 && B->gethitpoints() > 0)
//		{
//			attack(A, B);
//			attack(B, A);
//			/*
//			A_damage = A->getDamage() - B->getdefense();
//			B_damage = B->getDamage() - A->getdefense();
//			cout << A->getName() << " damage is " << A_damage << endl;
//			cout << B->getName() << " damage is " << B_damage << endl;
//			A->hitpointschanger(B_damage);
//			B->hitpointschanger(A_damage);
//			cout << A->getName() << " HP is " << A->gethitpoints() << endl;
//			cout << B->getName() << " HP is " << B->gethitpoints() << endl;
//			*/
//
//		}
//		if (B->gethitpoints() <= 0)
//			cout << A->getName() << " has Killed " << B->getName() << endl;
//		else
//			cout << A->getName() << " has been killed by " << B->getName() << endl;
//	}
//
//
//};

>>>>>>> e116e9fe4796fb1aea981cb2fe3440a6c514b4d9
